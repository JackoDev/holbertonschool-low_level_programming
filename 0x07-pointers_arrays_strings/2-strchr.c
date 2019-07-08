#include "holberton.h"
#include <stddef.h>
/**
 *_strchr -locates a character in a string.
 * @s: string to review
 * @c: char to find inside the s
 *
 * Return: a pointer the c inside the string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
		else
		{
			i++;
			s = s + 1;
		}
	}
	return (NULL);
}
