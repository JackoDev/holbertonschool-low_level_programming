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
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
