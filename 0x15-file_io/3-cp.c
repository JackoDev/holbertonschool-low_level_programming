#include "holberton.h"
#include <stdio.h>
/**
 * error_func - check for errors
 * @f1: file one
 * @f2: file two
 * @arv: create an array of arguments
 */
void error_func(int f1, int f2, char *arv[])
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		exit(98);
	}
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99);
	}

}
/**
 * main - main function to copy one file to another
 * @arg: count of arguments
 * @arv: array of arguments
 * Return: Always 0.
 */
int main(int arg, char **arv)
{
	int filed1, filed2;
	char buffer[1024];
	ssize_t a, b;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	filed1 = open(arv[1], O_RDONLY);
	filed2 = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_func(filed1, filed2, arv);

	a = 1024;
	while (a == 1024)
	{
		a = read(filed1, buffer, 1024);
		if (a == -1)
		{
			error_func(-1, 1, arv);
		}
		b = write(filed2, buffer, a);
		if (b == -1)
		{
			error_func(1, -1, arv);
		}
	}
	if (close(filed1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed1);
		exit(100);
	}
	if (close(filed2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed2);
		exit(100);
	}
	return (0);
}
