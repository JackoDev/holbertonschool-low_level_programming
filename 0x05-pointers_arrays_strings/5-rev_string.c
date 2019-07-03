#include "holberton.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: the pointer to the string
 *
 * Return: its a void function
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	
	i = i - 1;
	char new[i + 1];

	while (j < i)
	{
		s[j] = new[i];
		j++;
		i--;
	}
	s[j] = '\0';
}
