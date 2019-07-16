#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: amount of rows
 * @height: amount of colums
 * Return: the pointer to the array
 */
int **alloc_grid(int width, int height)
{

	int **new;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	*new = (int *)malloc(sizeof(int) * width * height);

	if (*new == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(new + i * height + j) = 0;
		}
	}
	return (new);
}

