#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - create a dog structure
 * @name: type struct
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (NULL);

	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;

	return (new);
}
