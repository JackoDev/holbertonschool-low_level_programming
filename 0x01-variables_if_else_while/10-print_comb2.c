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
	int b = 0;
	int c = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (c < 99)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
			c++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
