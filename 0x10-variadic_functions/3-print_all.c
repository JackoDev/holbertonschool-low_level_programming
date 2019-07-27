#include "variadic_functions.h"
/**
 * print_int - prints integers
 * @valist: list of the arguments
 * @sep: string of separator
 * Return: its a void function
 */
void print_int(va_list valist, char *sep)
{
	printf("%s%d", sep, va_arg(valist, int));
}

/**
 * print_char - prints characters
 * @valist: list of the arguments
 * @sep: string of the separator
 * Return: is a void function
 */
void print_char(va_list valist, char *sep)
{
	printf("%s%c", sep, va_arg(valist, int));
}
/**
 * print_string - prints strings
 * @valist: list of strings
 * @sep: string of separator
 * Return: its a void function
 */
void print_string(va_list valist, char *sep)
{
	char *new;

	new = va_arg(valist, char *);
	if (new == NULL)
		new = "(nil)";
	printf("%s%s", sep, new);
}
/**
 * print_float - to print floats
 * @valist: list of floats
 * @sep: string of sepárator
 * Return: its a void function
 */
void print_float(va_list valist, char *sep)
{
	printf("%s%f", sep, va_arg(valist, double));
}
/**
 * print_all - prints a string in many formats way
 * @format: string with a list of formats
 * Return: its a void function
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int a, b;
	char *separator;
	formats select[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(valist, format);
	a = 0;
	separator = "";
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *(select[b]).select)
			{
				select[b].ptr(valist, separator);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(valist);
}
