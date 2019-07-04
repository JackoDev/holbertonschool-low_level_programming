#include "holberton.h"
/**
 * _strl - size of the str
 * @s: string to review
 * Return: size of the string
 */
int _strl(char *s)
{
	int cont = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		cont++;
	}	return (cont);
}
/**
 * rev_string - prints a string in reverse, followed by a new line.
 * @s: the pointer to the string
 *
 * Return: its a void function
 */
void rev_string(char *s)
{
	int a, b;
	char ini, fin;

	b = _strl(s) - 1;
	for (a = 0; a < b; a++)
	{
		ini = s[a];
		fin = s[b];
		s[a] = fin;
		s[b--] = ini;
	}
}
