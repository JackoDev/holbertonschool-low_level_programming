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
		i++;
	return (i);
}
/**
 * _strcat - concatenates two strings.
 * @dest: string of destiny
 * @src: string of source
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int tamd = _strlen(dest) - 1;
	int i;

	for (i = 0; src[i] != '\0'; i++, tamd++)
	{
		dest[tamd + 1] = src[i];
	}
	dest[tamd + 1] = '\0';
	return (dest);
}
