#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the int to review
 * Return: the last digit of n integer
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n * (-1));
	}

	n = (n % 10);
	_putchar(n + '0');
	return (0);
}
