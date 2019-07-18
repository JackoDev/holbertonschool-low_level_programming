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
	void *new;

	if (nmemb == 0 || size == 0)
		return (NULL);


	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
