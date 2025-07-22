#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - custom printf function
 * @format: format string containing characters and format specifiers
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;


	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '\0')
			return (-1);

			count += get_spec(format[i], args);
		}
		i++;
	}
	va_end(args);
	return (count);
}
