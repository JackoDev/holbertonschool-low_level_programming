#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	return (c);

}

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: type char
 * @s2: type char
 * @n: type unsigned int
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int  tam, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	tam = (unsigned int)_strlen(s1);
	p = malloc((tam + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (tam + n); a++)
	{
		if (a < tam)
			*(p + a) = *(s1 + a);
		else
		{
			*(p + a) = *(s2 + b);
			b++;
		}
	}
	*(p + a) = '\0';

	return (p);
}
