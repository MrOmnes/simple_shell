#include "main.h"

/**
 * print_char_pointer - print string
 * @args: arg to print
 * Return: Length
 */
int print_char_pointer(va_list args) /*Fonction qui affiche*/
{                                     /* l'argument de type char poiteur*/
	char *str = va_arg(args, char *);
	int charn = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[charn])
	{
		_putchar(str[charn]);
		charn++;
	}

	return (charn);
}
