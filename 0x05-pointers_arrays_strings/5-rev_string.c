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
	}
	cont = i - 1;
	return (cont);
}
/**
 * rev_string - prints a string in reverse, followed by a new line.
 * @s: the pointer to the string
 *
 * Return: its a void function
 */
void rev_string(char *s)
{
	int j = 0;
	int cont;

	cont = _strl(s);
	char new[cont];

	while (cont >= 0)
	{
		new[j] = s[cont];
		cont--;
		j++;
	}

	while (j >= 0)
	{
		s[cont] = new[cont];
		cont++;
		j--;
	}
	s[cont + 1] = '\0';
}
