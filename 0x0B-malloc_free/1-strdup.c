#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to review
 *
 * Return: the lenght of the string s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: the pointer to the string os destination
 * @src: the pointer to the string of source
 * Return: the pointer to dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string given as a parameter
 *
 * Return: pointer to the new array
 */
char *_strdup(char *str)
{
	char *new;
	int size;

	if (str == NULL)
		return (NULL);

	size = _strlen_recursion(str);
	new = malloc(1 + size * sizeof(char));

	if (new == NULL)
		return (NULL);

	return (_strcpy(new, str));
	free(new);
}
