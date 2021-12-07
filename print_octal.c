#include "main.h"

/**
 * print_octal - fonction qui affiche en base 8
 * @args: argument
 * Return: Length
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	char s[90];
	int length = 0;

	if (num == 0)
	{
		_putchar(0);
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		s[i] = num % 8;
		num = num / 8;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i] + 48), length++;

	return (length);
}
