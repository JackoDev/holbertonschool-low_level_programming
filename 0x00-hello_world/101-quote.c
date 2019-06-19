#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - prints a sytring to the standar error
 * Return: 1
 */
int main(void)
{
char tx[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
char *punt = tx;

	write(2, punt, 60);
	return (1);
}
