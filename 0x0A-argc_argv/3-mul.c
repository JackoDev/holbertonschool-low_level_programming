#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiply two numbers
 * @argc: argument number of parameters
 * @argv: array with options inside the function
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
