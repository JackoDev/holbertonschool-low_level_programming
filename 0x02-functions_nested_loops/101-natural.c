#include "holberton.h"
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below
 * 1024 (excluded), followed by a new line.
 * Return: sum of the multiplies
 */
int main(void)
{
	int sum = 0, mul = 0, n = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			mul = n;
			sum = sum + mul;
			n++;
		}
		else
			n++;
	}
	printf("%d\n", sum);
	return (0);
}
