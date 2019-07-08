#include "holberton.h"
#include <stddef.h>
/**
 *_strspn - gets the length of a prefix substring.
 * @s: string to review
 * @accept: string with accepted bytes
 *
 * Return: number of butes in the initial section of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, i = 0;
	unsigned int num, num2;


	num = 0;
	while (s[i] != '\0')
	{
		num2 = num;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				num++;
			j++;
		}
		if (num2 == num)
			return (num);
		i++;
	}
	return (num);
}
