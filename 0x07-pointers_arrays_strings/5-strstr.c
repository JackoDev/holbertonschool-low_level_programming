#include "holberton.h"
#include <stddef.h>
/**
 *_strstr -locates a substring.
 * @haystack: string to review
 * @needle: string with accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in  accept or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, ini;

	i = 0;
	while (haystack[i] != '\0')
	{
		ini = i;
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0' &&
				haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + ini);
		}
		i = ini + 1;
	}
	return (NULL);
}
