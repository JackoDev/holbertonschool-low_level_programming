#include "holberton.h"

/**
 * print_square -  prints a square
 * @size: the size of the square
 *
 * Return: its a void function.
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
		_putchar('\n');
}
