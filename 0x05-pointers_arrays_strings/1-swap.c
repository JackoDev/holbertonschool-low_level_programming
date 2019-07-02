#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the pointer to a first integer
 * @b: the pointer to the second integer
 * Return: its a void function
 */
void swap_int(int *a, int *b)
{
	int pc = *a;

	*a = *b;
	*b = pc;
}
