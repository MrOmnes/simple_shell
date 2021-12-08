#include "main.h"


/**
 * search_type - Search type of format
 * @format: Arguments
 * Return: VOID
 */
int (*search_type(const char *format))(va_list)
{
	int loop = 0;

	search_type_t format_of_char[] = {/*get function to call*/
	{"c", print_char},
	{"i", print_integer},
	{"d", print_integer},
	{"s", print_char_pointer},
	{"b", print_binary},
	{"u", print_unsigned},
	{"o", print_octal},
	{"x", print_hexadecimal},
	{"X", print_hexa_up},
	{"r", print_reverse},
	{"%", print_percent},
	{NULL, NULL}};

	while (format_of_char[loop].type != NULL)
	{
		if (format_of_char[loop].type[0] == format[0])
		{
			return (format_of_char[loop].f);
		}
		loop++;
	}

	return (NULL);
}


/**
 * _printf - Print what we want to print
 * @format: Arguments
 * Return: Length of Arguments
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int (*pointed_function)(va_list);
	int length = 0;

	va_list args; /*declare une liste d'argument*/

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	va_start(args, format); /*initialise args*/

	for (i = 0; format[i]; i++)
	{

		if (format[i] == '%')
		{

			if (format[i + 1] != '\0')
				pointed_function = search_type((format + i + 1));

			if (pointed_function != NULL)
			{
				length += pointed_function(args);
				i++;
			}
			else
				length += _putchar(format[i]);
		} else
			length += _putchar(format[i]);
	}
	va_end(args);
	return (length); /*return la taille de format*/
}
