#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
* print_char - prints a character from the argument list
* @args: argument list containing the character to print
* Return: number of characters printed
*/
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
* print_string - prints a string from the argument list
* @args: argument list containing the string to print
* Return: number of characters printed
*/
int print_string(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char);

	if (str == NULL)
	{
	_putchar ('\0');
	}
	while (str[len])
	{
	_putchar (str[len]);
	len++;
	}
	return (len);
}
/**
* print_percent - prints a percent sign
* @args: argument list (unused)
* Return: number of characters printed
*/
int print_percent(va_list args)
{
	(void)args;
	return (_putchar ('%'));
}
/**
 * print_integer - prints an integer from the argument list
 * @args: argument list containing the integer to print
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
	char digits[10];
	int i = 0;
	int num = va_arg(args, int);
	int j;
	int count = 0;

	if (num < 0)
	{
		_putchar ('-');
		count++;
		num = -num;
	}

	if (num == 0)
	{
		_putchar ('0');
		return (1);
	}

	while (num > 0)
	{
		int digit = num % 10;

		digits[i] = digit + '0';
		i++;
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar (digits[j]);
		count++;
	}

	return (count);
}
