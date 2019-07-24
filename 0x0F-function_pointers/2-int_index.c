#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - executes a function given as a parameter on each element
 * of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: function given as parameter
 *Return: the index for the first coincidence inside the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, res;

	if (size <= 0)
		return (-1);

	if (array != NULL || cmp != NULL)
	{
		int (*p)(int);

		p = cmp;
		while (i < size)
		{
			res = p(array[i]);
			if (res != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
