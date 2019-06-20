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
	int c = 2;
	int d = 0;

	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (d < 119)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
				d++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
