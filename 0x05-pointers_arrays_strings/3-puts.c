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
	char aa;

	while (str[i] != '\0')
	{
		aa = str[i];
		_putchar(aa);
		i++;
	}
}
