#include "holberton.h"
/**
 * puts2 -  prints a string, followed by a new line, to stdout.
 * @str: the pointer to the string
 *
 * Return: its a void function
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
