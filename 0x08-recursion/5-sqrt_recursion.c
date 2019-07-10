#include "holberton.h"
/**
 * multiplica - search for a sqr.
 * @n: the number to review in the previous function
 * @cont: the number to increase and find the sqr match
 * Return: the cont or -1 in error case
 */
int multiplica(int n, int cont)
{
	if (n == (cont * cont))
		return (cont);
	else if (n > (cont * cont))
		return (multiplica(n, cont + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to review for
 *
 * Return: the sqr of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (multiplica(n, 1));
}
