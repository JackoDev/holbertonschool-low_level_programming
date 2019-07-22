#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: type struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}