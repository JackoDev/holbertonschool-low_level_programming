#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: the pointer to a first integer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
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
 * _strncat - concatenates two strings.
 * @dest: string of destiny
 * @src: string of source
 * @n: number of bytes to use in src
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n, char *ant)
{
	int tamd = _strlen(ant);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++, tamd++)
		dest[tamd] = src[i];

	dest[tamd + 1] = '\0';
	return (dest);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: size of bytes in the s2 to concatenate to s1
 * Return: a pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new, *tmp;
	unsigned int size1, size2;
	
	tmp = "";
	if (s1 == NULL)
		s1 = tmp;
	if (s2 == NULL)
		s2 = tmp;
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n >= size2)
		n = size2;
	new = malloc(size1 + size2 + 1);
	if (new == NULL)
		return (NULL);
	_strcpy(new, s1);
	_strncat(new, s2, n, s1);
	return (new);
}
