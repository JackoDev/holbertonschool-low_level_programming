#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the int to review
 * Return: the n integer
 */
int _abs(int n)
{
	if (n < 0)
		n = (n * (-1));
	else
		n = (n * 1);
	return (n);
}
