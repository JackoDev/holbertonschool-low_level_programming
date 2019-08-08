#include "holberton.h"
/**
 * binary_to_uint - convert a string of 1 and 0 to unsigned int
 * @b: string to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int k = 0, i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	}

	i = i - 1;
	while (i >= 0)
	{
		if (b[i] == 48)
		{
			k++;
			i--;
		}
		else if (b[i] == 49)
		{
			result = result + (1 << k);
			k++;
			i--;
		}
		else
			return (0);
	}
	return (result);
}
