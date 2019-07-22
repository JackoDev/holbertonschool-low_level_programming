#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: the pointer to a first integer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}
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

	(*new).name = malloc(_strlen(name));
	if ((*new).name == NULL)
		return (NULL);
	(*new).name = name;

	(*new).age = age;

	(*new).owner = malloc(sizeof(_strlen(owner)));
	if ((*new).owner == NULL)
		return (NULL);
	
	(*new).owner = owner;

	return (new);
}
