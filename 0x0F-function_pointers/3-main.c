#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calc the operation between two numbers
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: the result of the operation
 */
int main(int argc, char *argv[])
{
	int num1, num2, resultado;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if ((operator != '+' && operator != '-' && operator != '*'
			&& operator != '/' && operator != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	resultado = get_op_func(argv[2])(num1, num2);
	printf("%d\n", resultado);
	return (0);
}
