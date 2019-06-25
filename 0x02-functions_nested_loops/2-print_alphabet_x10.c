#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by
 * a new line.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int i2 = 0;

	while (i2 < 10)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
		i = 0;
		i2++;
	}
}
