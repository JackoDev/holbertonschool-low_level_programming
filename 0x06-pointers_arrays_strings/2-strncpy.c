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
 * _strncpy - copy a string.
 * @dest: string of destiny
 * @src: string of source
 * @n: number of bytes to use in src
 *Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, tamd;
	int tams = _strlen(src);

	for (i = 0, tamd = 0; i <= n && src[i] != '\0'; i++, tamd++)
		dest[tamd] = src[i];
	for (i = tams ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
