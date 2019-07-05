#include "holberton.h"
/**
 * leet -  encodes a string into 1337.
 * @s: the string
 * Return: a pointer to the string
 */
char *leet(char *s)
{
	int i;
	int j;
	char orig[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (orig[j] == *(s + i))
				*(s + i) = repl[j];
		}
	}
	return (s);
}
