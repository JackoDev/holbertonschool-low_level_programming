#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary mode
 * Return: its a void function
 */
void print_binary(unsigned long int n)
{
	int b = 0, c;
	unsigned long a = 1;

	a = a << 63;
	for (c = 0; c < 64; c++)
	{
		if (b == 0)
		{
			if ((n & a) == 0)
			{
				if (c == 63)
					_putchar('0');
				a = a >> 1;
				continue;
			}
		}
		if ((n & a) != 0)
		{
			b = 1;
			_putchar('1');
		}
		else
			_putchar('0');
		a = a >> 1;
	}
}
