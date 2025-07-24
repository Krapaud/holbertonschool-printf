#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - custom printf function
 * @format: format string containing characters and format specifiers
 *
 * Description: This function parses the format string and prints
 * characters to stdout. For each '%' found, it calls get_spec to
 * handle the format specifier. Uses _putchar for regular characters.
 *
 * Return: number of characters printed, or -1 on error
 */
int_printf(const char *format, ...)
{
	va_list args;
	int count = 0; /* Total number of characters printed */
	int i = 0;     /* Index for iterating through format string */

	/* Check if format is NULL */
	if (format == NULL)
		return (-1);

	/* Initialize the variable argument list */
	va_start(args, format);

	while (format[i])
	{
		/* Check if the current character is not a format specifier */
		if (format[i] != '%')
		{
			/* Print regular character */
			count += _putchar (format[i]);
		} else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			/* Handle format specifier */
			count += get_spec(format[i], args);
			/* If the specifier is recognized, count is updated */
			/* If not recognized, it prints '%' and the character */
			/* and returns 2 for the two characters printed */
		}
		i++;
		/* Move to the next character in the format string */
		/* Continue until the end of the format string */
	}
	va_end(args);
	/* End the variable argument list */
	return (count);
	/* Return the total number of characters printed */
}
