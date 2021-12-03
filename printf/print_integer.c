#include "../main.h"

/**
 * print_integer - print integer
 * @args: arg to print
 * Return: 0
 */

int print_integer(va_list args) /*Fonction qui affiche*/
{                                /* l'argument de type int*/
	int i = va_arg(args, int);

	return (print_number(i));

}
