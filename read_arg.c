#include <stdio.h>

int main(__attribute__((unused)) int ac, char **av)
{
	int i = 1;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
}