#include "variadic_functions.h"
/**
 * print_strings - prints all the numbers of a variadic functions
 * @n: number of arguiments passed
 * @separator: string to be printed between the strings
 * Return: its a void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *res;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(strings, char*);
		if (res == NULL)
			printf("(nil)");
		else
		{
			printf("%s", res);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
