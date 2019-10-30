#include "sort.h"
/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 * Return: its a void function
 */
void swap_int(int *x, int *y)
{
	int tempo;

	tempo = *x;
	*x = *y;
	*y = tempo;
}
/**
 * lomuto_part - partition system for execute the quick sort
 * @array: the array of integers
 * @ini: the initial point to sort
 * @pivot: the pivot for the sort algorithm
 * @size: the size of the array
 * Return: a new point to continue the sort
 */
int lomuto_part(int *array, size_t size, int piv, int ini)
{
	int a;

	for (a = ini; a <= piv - 1; a++)
	{
		if (array[a] <= array[piv])
		{
			if (ini != a)
			{
				swap_int(&array[ini], &array[a]);
				print_array(array, size);
			}
			ini++;
		}
	}
	if (ini != piv)
	{
		swap_int(&array[ini], &array[piv]);
		print_array(array, size);
	}
	return (ini);
}
/**
 * core_sort - recursive function to sort the sections of the array
 * @array: array of integers
 * @ini: the initial point to work by section
 * @pivot: the pivot of the sort
 * @size: size of the array
 * Return: its a void function
 */
void core_sort(int *array, size_t size, int piv, int ini)
{
	int b;

	if (ini < piv)
	{
		b = lomuto_part(array, ini, piv, size);
		core_sort(array, ini, b - 1, size);
		core_sort(array, b + 1, piv, size);
	}
}
/**
 * quick_sort - sorting algorithm for an array of integers
 * @array: the array of integers
 * @size: the size of the array
 * Return: its a void fucntion
 */
void quick_sort(int *array, size_t size)
{
	int piv = size - 1;
	int ini = 0;

	if (array == NULL || size < 0)
		return;

	core_sort(array, ini, piv, size);
}
