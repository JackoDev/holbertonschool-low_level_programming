#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase in reverse
 * Return: 0
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
