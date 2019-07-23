#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: size required to allocate
 * @size: size of the each member of the array
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *new;

	if (size == 0 || nmemb == 0)
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		new[i] = 0;
	return (new);
}
