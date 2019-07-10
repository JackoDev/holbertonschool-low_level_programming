#include "holberton.h"
/**
 * is_prime_number - search for a sqr.
 * @n: the number to review in the previous function
 * Return: the cont or -1 in error case
 */
int is_prime_number(int n)
{
	return (primeval(n, 2));
}
/**
 * primeval - validate if n is a prime number.
 * @n: the number to review for
 * @b: the divisor to review
 * Return: 1 - 0 - or -1
 */
int primeval(int n, int b)
{
	if (n < 2)
		return (0);
	if (b * b > n)
		return (1);
	if (n % b == 0)
		return (0);
	else
		return (primeval(n, b + 1));
}
