#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase and in uppercase
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	int u = 0;

	while (u <= 9)
	{
		putchar(u + '0');
		u++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
