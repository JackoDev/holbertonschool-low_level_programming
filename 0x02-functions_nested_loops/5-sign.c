#include "holberton.h"
/**
 * print_sign - prints the sign of a number.
 * @n: the int to review
 * Return: 1, 0 and -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
