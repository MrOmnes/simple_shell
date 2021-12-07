#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int i = 1, c = 0, status;
	size_t characters, buffsize = 49;
	const char delimiteur[] = " ";
	char *buffer, *tok, *command, *exit = "exit";
	pid_t my_pid, child_pid;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
		return (0);
	while (i = 1)
	{
		my_pid = getpid();
		if (my_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		_printf("$ ");
		characters = getline(&buffer, &buffsize, stdin);
		if (characters == -1)
		{
			free(buffer);
			_printf("\n");
			return (0);
		}
		buffer[_strlen(buffer) - 1] = '\0';
		command = buffer;
		tok = strtok(buffer, delimiteur);
		if (_strcmp(buffer, exit) == 0)
		{
			free(buffer);
			return (0);
		}
		if (tok == NULL)
			_printf("You have to send a command.\n");
		if (_strcmp(buffer, "env") == 0)
			env();
		else
		{
			while (tok != NULL)
			{
				if (access(buffer, R_OK) != 0)
					_printf("Le fichier n'est pas accessible.\n");
				else
				{
					child_pid = fork();
					if (child_pid == 0)
					{
						if (execve(tok, av, NULL) == -1)
							perror("Error:");
					}
				}
				tok = strtok(NULL, delimiteur);
			}
		}
		wait(&status);
	}
	free(buffer);
}
