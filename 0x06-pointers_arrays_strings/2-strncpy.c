#include "holberton.h"
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

	for (i = 0, tamd = 0; i < n && src[i] != '\0'; i++, tamd++)
		dest[tamd] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
