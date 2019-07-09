#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: nuimber to start
 *
 * Return: its a void function
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d", n);
	printf("\n");
}
