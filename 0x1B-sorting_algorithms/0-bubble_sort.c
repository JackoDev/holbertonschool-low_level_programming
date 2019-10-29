#include "sort.h"
/**
 * bubble_sort - sort an array of integers
 * @array: trhe array of integers
 * @size: the size of the array
 * Return: its a void function
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	unsigned int i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + 1) < size)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
