#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - returns the length of a string.
 * @ac: string to review
 * @av: string to review
 * Return: pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	int tamd = _strlen_recursion(dest) - 1;
	int i;

	for (i = 0; src[i] != '\0'; i++, tamd++)
	{
		dest[tamd + 1] = src[i];
	}
	dest[tamd + 1] = '\0';
	return (dest);
}

