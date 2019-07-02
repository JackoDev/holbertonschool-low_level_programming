#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: the pointer to a first integer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: the pointer to the string
 *
 * Return: its a void function
 */
void print_rev(char *s)
{
	int c = _strlen(s) - 1;

	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}

	_putchar('\n');
}
