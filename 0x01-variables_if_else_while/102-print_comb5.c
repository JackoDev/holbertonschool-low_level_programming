#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the two digit numbers combinations separated by commas
 * and a space
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 1;

	while (a < 100)
	{
		while (b < 100)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
