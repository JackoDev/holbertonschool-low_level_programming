#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: type of the arguments at least one
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	int res = 0;

	if (n == 0)
		return (0);


	va_start(numbers, n);
	for (i = 0; i < n; i++)
		res =  res + va_arg(numbers, int);

	va_end(numbers);
	return (res);
}
