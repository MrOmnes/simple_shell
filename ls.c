#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int ls(void)
{
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t my_pid;
    pid_t child_pid;
	int status;
	int i = 0;

	my_pid = getpid();

	if (my_pid == -1)
    {
        perror("Error:");
        return (1);
    }

	while (i < 5)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}

		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}

		wait(&status);
		i++;
	}

    return (0);
}
