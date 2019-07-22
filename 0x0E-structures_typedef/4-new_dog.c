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
 * new_dog - create a dog structure
 * @name: type struct
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL || name == NULL || owner == NULL)
		return (NULL);

	new->age = age;

	(*new).name = malloc(sizeof(char) * (_strlen(name)));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}


	(*new).owner = malloc(sizeof(char) * (_strlen(owner)));
	if ((*new).owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	(*new).name = _strcpy(new->name, name);
	(*new).owner = _strcpy(new->owner, owner);

	return (new);
}
