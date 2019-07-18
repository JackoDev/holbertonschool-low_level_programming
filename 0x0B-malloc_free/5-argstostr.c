#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - returns the length of a string.
 * @ac: string to review
 * @av: string to review
 * Return: pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	char *new;
	int ac_new, i, j;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ac_new = 0; ac_new < ac; ac_new++)
	{
		for (i = 0; av[ac_new][i]; i++)
			size++;
	}

	new = malloc(sizeof(char) * size + 1);

	if (new == NULL)
		return (NULL);

	j = 0;

	for (ac_new = 0; ac_new < ac; ac_new++)
	{
		for (i = 0; av[ac_new][i]; i++)
		{
			new[j++] = av[ac_new][i];
		}
		new[j++] = '\n';
	}
	new[size] = '\0';

	return (new);
}
