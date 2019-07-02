#include "holberton.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: the pointer to the string
 *
 * Return: its a void function
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
