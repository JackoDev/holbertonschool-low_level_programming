#include "holberton.h"
/**
 * get_bit - preturns the value of a bit at a given index.
 * @n: the number to print in binary mode
 * @index: index of the bit to review
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 63)
		return (-1);
	a = a << index;
	if (a & n)
		return (1);
	else
		return (0);
}
