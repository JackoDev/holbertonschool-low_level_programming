#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free the previous program
 * @grid: size of the array
 * @height: the specific char to initialize the array
 * Return: pointer to the new array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
