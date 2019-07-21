#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: void function
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i < 49)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
