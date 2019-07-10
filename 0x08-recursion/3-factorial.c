#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: gived number
 *
 * Return: the factorial of n number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
