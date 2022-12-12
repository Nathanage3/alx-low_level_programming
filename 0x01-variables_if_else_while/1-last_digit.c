#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and graeter than 5\n",	n,	m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		print("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}

