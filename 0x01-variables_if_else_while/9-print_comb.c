#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the digit numbers separated by commas and space
 * Return: 0
 */

int main(void)
{
	int u = 0;

	while (u <= 9)
	{
		putchar(u + '0');
		if (u != 9)
		{
			putchar(',');
			putchar(' ');
		}
		u++;
	}
	putchar('\n');
	return (0);
}
