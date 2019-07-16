#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array
 * @c: the specific char to initialize the array
 * Return: pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));
	while (i <= size)
	{
		str[i] = c;
		i++;
	}
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
