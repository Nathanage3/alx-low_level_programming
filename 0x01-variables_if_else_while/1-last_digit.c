#include <stdlib.h>

#include <time.h>

#include <stdio.h>
 /**
  * main - main block
  * Return: 0
  */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = x % 10;

	printf("Last digit is %d is %d ",	x,	n);

	if (x > 5)
	{
		printf("and is greater than 5");	}
		else	if (x == 0)
	{
		printf("and is 0")
	}
		else	if (x < 6)
	{
		printf("and is less than 6 and not 0");

	}
	return	(0);

}
