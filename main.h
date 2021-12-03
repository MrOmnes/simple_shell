#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdlib.h>

void env(void);
int stat(int ac, char **av);
int _strcmp(char *s1, char *s2);

#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct search_type - Struct searchtype
 *
 * @type: The type we search
 * @f: function assiciated
 */
typedef struct search_type
{
	char *type;
	int (*f)(va_list);
} search_type_t;

int (*search_type(const char *format))(va_list);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_integer(va_list args);
int print_float(va_list args);
int print_char_pointer(va_list args);
int _putchar(char c);
int _strlen(const char *s);
int print_number(int n);
int print_binary(va_list args);
int print_number_unsigned_int(int n);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal(va_list args);
int print_hexa_up(va_list args);
int print_percent(va_list args);
int print_reverse(va_list args);


#endif
#endif