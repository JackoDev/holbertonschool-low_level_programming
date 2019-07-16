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
 * _strcat - concatenates two strings.
 * @dest: string of destiny
 * @src: string of source
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int tamd = _strlen_recursion(dest) - 1;
	int i;

	for (i = 0; src[i] != '\0'; i++, tamd++)
	{
		dest[tamd + 1] = src[i];
	}
	dest[tamd + 1] = '\0';
	return (dest);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string
 *
 * Return: pointer to the new array
 */
char *str_concat(char *s1, char *s2)
{
	char *new1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new1 = malloc((_strlen_recursion(s1) + _strlen_recursion(s2) + 1));
	if (new1 == NULL)
		return (NULL);

	_strcpy(new1, s1);
	_strcat(new1, s2);
	return (new1);
}
