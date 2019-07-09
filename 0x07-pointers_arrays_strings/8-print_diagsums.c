#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - prints the chessboard.
 * @a: array to print
 * @size: the size of the diagonal
 * Return: its a void function
 */
void print_diagsums(int *a, int size)
{
	unsigned int sumi = 0, sumj = 0;
	int i;

	i = 0;
	while (i < size * size)
	{
		sumi += *(a + i);
		i += size + 1;
	}

	i = size - 1;
	while (i < size * size - 1)
	{
		sumj += *(a + i);
		i += size - 1;
	}
	printf("%d, %d\n", sumi, sumj);
}
