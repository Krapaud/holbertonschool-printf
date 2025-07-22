#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct print_funcs - structure to hold format specifiers
 * and their corresponding functions
 * @specifier: character representing the format specifier
 * @f: pointer to the function that handles the specifier
 */
typedef struct print_funcs
{
	char specifier;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _printf_all(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_percent(va_list args);
int _putchar(char c);
int get_spec(char format, va_list args);

#endif
