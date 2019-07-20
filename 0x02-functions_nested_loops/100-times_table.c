#include "holberton.h"
/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: the size of the tables
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, res = 0;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (res >= 100)
			{
				_putchar((res / 100) + '0'), _putchar((res % 100) / 10 + '0');
				_putchar((res % 100) % 10 + '0');
			}
			else if (res >= 10)
			{
				_putchar((res / 10) + '0'), _putchar((res % 10) + '0');
			}
			else if (res < 10)
				_putchar((res % 10) + '0');
			if (j < n)
			{
				_putchar(',');
				if (i * (j + 1) < 10)
				{
					_putchar(' '), _putchar(' '), _putchar(' ');
				}
				else if (i * (j + 1) >= 10 && i * (j + 1) < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (i * (j + 1) >= 100)
					_putchar(' ');
			}
		}
		_putchar('\n');
		j = 0;
	}
}
