#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed
 * by a new line.
 *
 * Return: its a void function.
 */
void more_numbers(void)
{
	char str[] = "01234567891011121314";
	int i = 0;
	int j;

	for (j = 0; j < 10; j++)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		i = 0;
		_putchar('\n');
	}
}
