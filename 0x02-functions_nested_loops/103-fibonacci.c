#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: void function
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, sum = 2;

	do {
		c = a + b;
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
	} while (c < 4000000);
	printf("%lu\n", sum);
	return (0);
}
