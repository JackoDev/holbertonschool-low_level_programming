#include "holberton.h"
/**
 * rev_string - prints a string in reverse, followed by a new line.
 * @s: the pointer to the string
 *
 * Return: its a void function
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int cont = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	cont = i - 1;
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