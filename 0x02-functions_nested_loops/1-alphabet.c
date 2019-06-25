#include "holberton.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
