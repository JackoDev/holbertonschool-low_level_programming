#include "holberton.h"
#include <stdlib.h>
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
	char new;


	for (i = 0; s[i] != '\0'; i++)
	{
	}
	
	i = i - 1;

	for (j = 0; j <= i / 2; j++)
	{
		new = s[j];
		s[j] = s[i - j];
		s[i - j] = new;
	}
}
