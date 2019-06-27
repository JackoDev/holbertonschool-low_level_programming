#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 (no 2 or 4), followed
 * by a new line.
 *
 * Return: its a void function.
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if ((n != '2') && (n != '4'))
		{
			_putchar(n);
			n++;
		}
		else
			n++;
	}
	_putchar('\n');
}
