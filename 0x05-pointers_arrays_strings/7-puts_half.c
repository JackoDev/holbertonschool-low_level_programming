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
 * puts_half - prints half of a string, followed by a new line.
 * @str: the pointer to the string
 * Return: its a void function
 */
void puts_half(char *str)
{
	int c = (_strlen(str) - 1);
	int n;

	if ((c % 2) == 0)
	{
		n = (c / 2) + 1;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = ((c - 1) / 2) + 1;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
