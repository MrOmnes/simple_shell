#include "main.h"

/**
 * print_float - print float
 * @args: arg to print
 * Return: 0
 */

int print_float(va_list args) /*Fonction qui affiche*/
{                              /* l'argument de type float*/
	printf("%f", va_arg(args, double));

	return (0);
}
