#include "main.h"

/**
 * print_char - print char
 * @args: argument
 * Return: Length
 */

int print_char(va_list args) /*Fonction qui affiche l'argument de type char*/
{
	char c = va_arg(args, int);
	int i = 0;

	_putchar(c);
	i++;

	return (i);
}
