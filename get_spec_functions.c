#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * get_spec - récupère le pointeur vers la fonction correspondant
 *                 à un spécificateur de format (%d, %s, etc.)
 * @format: le caractère du format (ex: 'd', 's', etc.)
 * @args: la liste d'arguments variables à traiter par la fonction de format
 *
 * Return: pointeur vers une fonction qui prend un va_list et retourne un int
 */
int get_spec(char format, va_list args)
{
	spec_t print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	int j = 0;
	int count = 0;

	while (print_funcs[j].specifier != '\0')
	{
		if (format == print_funcs[j].specifier)
		{
			count += print_funcs[j].f(args);
			return (count);
		}
		j++;
	}
	_putchar('%');
	_putchar(format);
	return (2);
}
