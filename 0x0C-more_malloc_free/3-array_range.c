#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array
 * @min: min param
 * @max: max param
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *new;
	int j, tam, k;

	if (min > max)
		return (NULL);
	tam = max - min;
	new = malloc(sizeof(int) * (tam + 1));
	if (new == NULL)
		return (NULL);
	k = min;
	for (j = 0; k <= max; j++)
	{
		new[j] = k;
		k++;
	}
	return (new);
}
