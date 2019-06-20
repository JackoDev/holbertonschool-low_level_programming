#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - prints the last digit of the n number and other strings
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int o = (n % 10);

	if (o > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, o);
	else if (o == 0)
		printf("Last digit of %i is %d and is 0\n", n, o);
	else if ((o < 6) && (o != 0))
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, o);
	return (0);
}
