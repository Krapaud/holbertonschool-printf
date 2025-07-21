#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the operation
 * @specifier: character representing the format specifier
 *
 * Return: pointer to the function that corresponds to the specifier,
 * or NULL if no match is found
 */

int (*get_op_func(char specifier))(va_list)
{
	print_t print_funcs[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_integer},
	{'i', print_integer},
	{'\0', NULL}
};
	int i = 0;

	while (print_funcs[i].specifier != '\0')
	{
		if (print_funcs[i].specifier == specifier)
			return (print_funcs[i].f);
		i++;
	}
	return (NULL);
}
