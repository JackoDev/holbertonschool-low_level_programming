#include "holberton.h"

/**
 * print_triangle -  draws a triangle on the terminal.
 * @size: the n times to print the \
 *
 * Return: its a void function.
 */
void print_triangle(int size)
{
	int c = 1;
	int i = size - 1;

	if (size > 0)
	{
		while (c <= size)
		{
			while (i >= c)
			{
				_putchar(' ');
				i--;
			}

			i = 0;

			while (i < c)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			i = size - 1;
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
