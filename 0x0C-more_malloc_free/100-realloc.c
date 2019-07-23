#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: a pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;


	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		new[i] = ((char *)ptr)[i];
	free(ptr);
	return (new);
}
