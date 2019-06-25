#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int larg;

	if (a > b)
	{
		if (b > c)
		{
			larg = a;
		}
		else
		{
			if (c > a)
				larg = c;
			else
				larg = a;
		}
	}
	else
	{
		if (b > c)
			larg = b;
		else
			larg = c;
	}
	return (larg);
}
