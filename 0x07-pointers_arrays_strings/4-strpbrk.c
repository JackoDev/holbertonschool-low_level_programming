#include "holberton.h"
#include <stddef.h>
/**
 *_strpbrk - searches a string for any of a set of bytes.
 * @s: string to review
 * @accept: string with accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in  accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s != '\0')
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return (NULL);
}
