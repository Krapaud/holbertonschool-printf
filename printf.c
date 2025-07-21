#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - custom printf function
 * @format: format string containing the characters and specifiers
 *
 * Return: number of characters printed, or -1 on error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
