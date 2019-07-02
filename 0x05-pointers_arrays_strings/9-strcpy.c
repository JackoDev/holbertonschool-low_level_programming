#include "holberton.h"
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
