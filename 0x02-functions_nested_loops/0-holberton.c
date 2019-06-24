#include "holberton.h"
/**
 * main - prints Holberton, followed by a new line.
 * Return: The program should return 0
 */
int main(void)
{
	int i = 0;
	char str[9] = "Holberton";

	while (i <= 9)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
