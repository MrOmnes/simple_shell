#include "../main.h"

/**
 * print_hexa_up - print in hexadeciamal
 * @args: arg to print
 * Return: Length
 */
int print_hexa_up(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	int length = 0;
	char s[90];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		s[i] = num % 16;
		if (s[i] <= 9)
			s[i] = 48 + (num % 16);
		else
			s[i] = 55 + (num % 16);
		num = num / 16;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]), length++;

	return (length);
}
