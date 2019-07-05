#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to string
 *
 * *Return: a pointer to the string
 */
char *cap_string(char *s)
{

	int a, b;
	char cond[] = " \t\n,;.!?\"(){}";

	a = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}
	while (s[a] != '\0')
	{
		for (b = 0; cond[b] != '\0'; b++)
		{
			if (s[a - 1] == cond[b] && (s[a] >= 'a' && s[a] <= 'z'))
			{
				s[a] -= ('a' - 'A');
			}
		}
		a++;
	}
	return (s);
}
