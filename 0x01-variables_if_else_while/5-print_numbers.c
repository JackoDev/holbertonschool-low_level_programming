#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints digit numbers
 * Return: 0
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
