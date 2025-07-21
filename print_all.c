#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * print_char - prints a character from the argument list
 * @args: argument list containing the character to print
 */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}
/**
 * print_string - prints a string from the argument list
 * @args: argument list containing the string to print
 */
void print_string(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		_putchar('\0');
	}
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
}
/**
 * print_percent - prints a percent sign
 * @args: argument list (unused)
 */
void print_percent(va_list args)
{
	(void)args;
	_putchar('%');
}

void print_integer(va_list args)
{
	_putchar(va_arg(args, int));
}