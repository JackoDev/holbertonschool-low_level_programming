#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to string
 * @n: number of elements in the string
 *Return: its a void function
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int new = 0;

	while (i < n)
	{
		new = a[n - 1];
		a[n - 1] = a[i];
		a[i] = new;
		i++;
		n--;
	}
}
