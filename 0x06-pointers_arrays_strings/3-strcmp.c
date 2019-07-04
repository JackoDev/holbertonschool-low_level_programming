#include "holberton.h"
/**
 * _strcmp - compare two strings.
 * @s1: first string
 * @s2: second string
 *Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int cont;

	cont = 0;
	while (s1[cont] != '\0')
	{
		if (s1[cont] >  s2[cont])
			return (s1[cont] - s2[cont]);
		if (s1[cont] < s2[cont])
			return (s1[cont] - s2[cont]);
		cont++;
	}
	return (0);
}
