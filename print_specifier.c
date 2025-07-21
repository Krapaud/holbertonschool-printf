#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * select_print - Choisit la bonne fonction selon le spécificateur
 * @format: chaîne de format
 * @i: position du caractère juste après '%'
 * @args: arguments variables
 * @print_funcs: tableau de correspondance
 *
 * Return: nombre de caractères imprimés
 */
int select_print(const char *format, int i, va_list args,
	print_t print_funcs[])
{
	int j;

	for (j = 0; print_funcs[j].specifier != '\0'; j++)
	{
		if (format[i] == print_funcs[j].specifier)
		{
			return (print_funcs[j].f(args));
		}
	}
	_putchar('%');
	_putchar(format[i]);
	return (2);
}
