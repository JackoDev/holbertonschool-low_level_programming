#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number to print in binary mode
 * @index: index of the bit to review
 * Return: 1 if works -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 63)
		return (-1);
	a = a << index;
	*n = (*n | a);
	return (1);
}
