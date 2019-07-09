#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, res = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (i * (j + 1) >= 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
		j = 0;
	}
}
