#include "search_algos.h"
/**
 * binary_rec - a recursive function to use the binary search algorithm
 * @arr: array to search
 * @first: the first element of the array
 * @last: the last element of the array
 * @value: the value to find
 * Return: the index where the value is located
 **/
int binary_rec(int arr[], int first, int last, int value)
{
	if (last >= first)
	{	
		int i, mid = first + (last - first) / 2;
		
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", i);
		printf("%d", last);
		printf("\n");

		if (arr[mid] == value)
			return (mid);
		if (arr[mid] > value)
			return (binary_rec(arr, first, mid - 1, value));
		return (binary_rec(arr, mid + 1, last, value));
	}
	return (-1);
}
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
	int first, last, index;
	
	if (array == NULL)
		return (-1);

	first = array[0];
	last = array[size - 1];
	index = binary_rec(array, first, last, value);
	
	if (index == -1)
		return (-1);

	return (index);
}
