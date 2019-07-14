#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: argument number of parameters
 * @argv: array with options inside the function
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		argv[0] = argv[5];
		printf("%s\n", argv[0]);
	}
	return (0);
}
