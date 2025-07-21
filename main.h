#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct print - structure for format specifiers
 * @specifier: format specifier character
 * @f: function pointer to the corresponding print function
 * print_t - struct to hold format specifiers and their corresponding functions
 * typedef struct print print_t;
 */
typedef struct print
{
	char specifier;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _printf_all(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_integer(va_list args);
void print_percent(va_list args);
void print_digit(va_list args);
int _putchar(char c);

#endif /* MAIN_H */
