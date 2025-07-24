#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * get_spec - retrieves the function pointer for a format specifier
 * @format: the format character (e.g. 'd', 's', etc.)
 * @args: the variable argument list to be processed by the format function
 *
 * Description: This function iterates through the print_funcs array to find
 * the function corresponding to the given format specifier. If found, it
 * calls the function and returns the number of characters printed. If the
 * specifier is not recognized, it prints '%' followed by the unknown format.
 *
 * Return: number of characters printed
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
	/* Array of format specifiers and their corresponding functions */

	int j = 0;
	int count = 0;

	while (print_funcs[j].specifier != '\0')
	{
		if (format == print_funcs[j].specifier)
		/*If the specifier matches*/
		{
			count += print_funcs[j].f(args);
			return (count);
		/*Call the function associated with the specifier*/
		/*and return the count of characters printed*/
		}
		j++;
	}
	/* If specifier is not recognized, print '%' and the character */
	_putchar('%');
	/* Print the unknown format specifier */
	_putchar(format);
	return (2);
	/* Return 2 for the two characters printed */
}
