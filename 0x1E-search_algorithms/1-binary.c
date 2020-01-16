#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to find
 * Return: the index where value is located
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1;

	if (array)
		while (first <= last)
		{
			size_t mid = (last - first) / 2 + first, i;

			printf("Searching in array: ");
			for (i = first; i < last; i++)
				printf("%lu, ", i);
			printf("%lu", last);
			printf("\n");
			if (array[mid] == value)
				return (mid);
			if (value > array[mid])
				first = mid + 1;
			else
				last = mid - 1;
		}
	return (-1);
}
