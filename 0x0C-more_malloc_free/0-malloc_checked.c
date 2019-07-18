#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size required to allocate
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
