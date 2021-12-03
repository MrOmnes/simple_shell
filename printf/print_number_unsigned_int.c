#include "../main.h"

/**
 * print_number_unsigned_int - afficher des nombres entiers
 *
 * @n: variable
 * Return: Length
 */
int print_number_unsigned_int(int n)
{
	unsigned int i = 0;
	unsigned int number_in_n;
	unsigned int j = 1;
	int length = 0;

	if (n == 0)
	{
		_putchar(48);
		return (1);
	}

	else
	{
		number_in_n = n;
		while (number_in_n > 0)
		{
			i++;
			number_in_n = number_in_n / 10;
		}
		while (i > 1)
		{
			j = j * 10;
			i--;
		}
		while (j > 0)
		{
			_putchar((n / j) % 10 + 48);
			length++;
			j = j / 10;
		}
	}

	return (length);
}
