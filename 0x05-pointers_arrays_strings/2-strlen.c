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
