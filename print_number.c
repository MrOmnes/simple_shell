#include "main.h"

/**
 * print_number - afficher des nombres entiers
 *
 * @n: variable
 * Return: Length
 */
int print_number(int n)
{
	unsigned int number_in_n;
	unsigned int j = 1;
	int length = 0;

	if (n == 0)
		return (_putchar('0'));
	if (n != 0)
	{
		if (n < 0)
		{
			length += _putchar('-'), number_in_n = n * (-1);
		}
		else
			number_in_n = n;

		while (number_in_n / j > 9)
		{
			j = j * 10;
		}
		while (j > 0)
		{
			_putchar((number_in_n / j) % 10 + '0');
			length++;
			j = j / 10;
		}
	}

	return (length);
}
