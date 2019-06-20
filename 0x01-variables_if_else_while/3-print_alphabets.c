#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase and in uppercase
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	char u = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (u  <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
