#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int c = 0;
	char buffer[strlen(av[c])];

    printf("$ ");

	fgets(buffer, 49, stdin);

	printf("%s", buffer);
/**
	tok = strtok(buffer, 32);

	printf("%s\n", tok);
*/
	open("./get_line", O_RDONLY);
    return (0);
}

