#include "holberton.h"
/**
 **_memcpy - copies memory area.
 * @dest: memory area pointed
 * @src: string of source
 * @n: size of the bytes to copy
 * Return: a pointer ti the s memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
