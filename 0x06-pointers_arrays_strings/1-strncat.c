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
 * _strncat - concatenates two strings.
 * @dest: string of destiny
 * @src: string of source
 * @n: number of bytes to use in src
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int tamd = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++, tamd++)
		dest[tamd] = src[i];

	dest[tamd + 1] = '\0';
	return (dest);
}
