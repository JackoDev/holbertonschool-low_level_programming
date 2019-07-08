#include "holberton.h"
/**
 **_memset - fills memory with a constant byte.
 * @s: memory area pointed
 * @b: a constant byte
 * @n: size of the bytes to fill
 * Return: a pointer ti the s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
