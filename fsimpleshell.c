#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int i = 1;
	int c = 0;
	char buffer[_strlen(av[c])];
	const char delimiteur[] = " ";
	char *bufftest = NULL;
	char *tok;
	pid_t my_pid;
    pid_t child_pid;
	int status;
	char *exit = "exit";
	char *command;

	while (i = 1)
	{
		my_pid = getpid();

		if (my_pid == -1)
		{
			perror("Error:");
			return (1);
		}

		_printf("$ ");

		bufftest = fgets(buffer, 49, stdin); /* remplacer par read ? */

		if (_strcmp(bufftest, "\0") == 0)
			return (0);

		bufftest[_strlen(bufftest) - 1] = '\0';

		command = bufftest;

		tok = strtok(buffer, delimiteur);

		if (_strcmp(bufftest, exit) == 0)
			return (0);

		if (_strcmp(bufftest, "env") == 0)
			env();

		if (tok == NULL)
		{
			_printf("You have to send a command.\n");
		}

		while (tok != NULL)
		{
			if (access(bufftest, R_OK) != 0)
			{
				_printf("Le fichier n'est pas accessible.\n");

			}
			else
			{
				child_pid = fork();

				if (child_pid == 0)
				{
					if (execve(tok, av, NULL) == -1)
					{
						perror("Error:");
					}
				}
			}
			tok = strtok(NULL, delimiteur);
  		}
		wait(&status);
	}
}
