#include "holberton.h"
#include <stdlib.h>
/**
 * count_w - count the size of a string
 * @strw: string to review
 *
 * Return: size of the string
 */
int count_w(char *strw)
{
	int wc = 0;
	int c = 0;

	while (strw[c] != " ")
	{
		c++;
		wc++;
	}
	return (wc);
}
/**
 * strtow - creates an array of chars, and initializes it
 * @str: size of the array
 *
 * Return: pointer to the new array
 */
char **strtow(char *str)
{
	char *new;
	int i = 0;
	int j = 0;

	while (*str != '\0')
	{
		if (*str == " ")
			*str++;
		else
		{
			new[i] = (*char)malloc(count_w(*str) + 1);
			if (new[i] == NULL)
				return (NULL);
			while (str != " ")
			{
				new[++i] = *str;
				*str++;
			}
		}
	}
}
