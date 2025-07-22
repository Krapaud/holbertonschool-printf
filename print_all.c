#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * print_char - prints a character from the argument list
 * @args: argument list containing the character to print
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * print_string - prints a string from the argument list
 * @args: argument list containing the string to print
 */
int print_string(va_list args)
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
	return (len);
}
/**
 * print_percent - prints a percent sign
 * @args: argument list (unused)
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

int print_integer(va_list args)
{
    char digits[10];
    int i = 0;
    int num = va_arg(args, int);
    int j;

    if (num < 0);
    _putchar ('-');
    num = -num;

    if (num == 0)
    {
        _putchar ('0');
        return;
    }

   while (num > 0)
   {
    int digit = num % 10;
    digits[i] = digit + '0';
    i++;
    num /= 10;
   }

   for (j = i - 1; i >= 0; j--)
   {
    _putchar(digits[j]);
   }
    
}