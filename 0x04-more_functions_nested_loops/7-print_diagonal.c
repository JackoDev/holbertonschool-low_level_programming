#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal on the terminal.
 * @n: the n times to print the \
 *
 * Return: its a void function.
 */
void print_diagonal(int n)
{
	int c = 0;
	int i = 0;

	if (n > 0)
	{
		while (c < n)
		{
			while (i < c)
			{
				_putchar(' ');
				i++;
			}
			i = 0;
			_putchar('\\');
			_putchar('\n');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
