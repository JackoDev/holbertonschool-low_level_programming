#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase except q and e letters
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if ((i != 'q') && (i != 'e'))
		{
			putchar(i);
			i++;
		}
		else
			i++;
	}
	putchar('\n');
	return (0);
}
