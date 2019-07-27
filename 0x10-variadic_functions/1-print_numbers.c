#include "variadic_functions.h"
/**
 * print_numbers - prints all the numbers of a variadic functions
 * @n: number of arguiments passed
 * @separator: string to be printed between the numbers
 * Return: its a void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;
	va_list numbers;

	if (separator == NULL)
		separator = "";

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(numbers, int);
		printf("%d%s\n", res, separator);
	}
	va_end(numbers);
}
