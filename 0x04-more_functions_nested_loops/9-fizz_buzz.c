#include "holberton.h"
#include <stdio.h>
/**
 * print_square -  prints a square
 * @size: the size of the square
 *
 * Return: its a void function.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
		if (i <= 99)
			printf(" ");
	}
	printf("\n");
}
