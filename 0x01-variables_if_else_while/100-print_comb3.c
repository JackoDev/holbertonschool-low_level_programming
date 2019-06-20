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
	int c = 0;

	while (a < 9)
	{
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			b++;
			if (c < 44)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
