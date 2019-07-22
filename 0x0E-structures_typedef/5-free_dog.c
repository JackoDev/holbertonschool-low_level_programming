#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dogs.
 * @d: the pointer to the struct
 * Return: void function
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

