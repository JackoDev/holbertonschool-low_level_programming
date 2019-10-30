#include "sort.h"
/**
 * selection_sort - sort an array of integers by the selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Return: its a void function
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, temp;

	if (size == 0 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
