#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: the string
 * Return: a pointer to the string
 */
char *rot13(char *s)
{
	char *new = s;
	char src[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (*s != '\0')
	{
		while ((*s != src[i]) && src[i] != '\0')
		{
			i++;
		}
		if (src[i] != '\0')
		{
			*s = key[i];
		}
		s++;
		i = 0;
	}
	return (new);
}
