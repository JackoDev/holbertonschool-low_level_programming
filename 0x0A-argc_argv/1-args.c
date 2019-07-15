#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument number of parameters
 * @argv: array with options inside the function
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
