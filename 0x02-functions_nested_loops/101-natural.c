#include <stdio.h>
/**
 * main - main
 * Return: Always 0
 */
int main(void)
{
	int a, b, i, j;
	int sum1, sum2, total;

	for (i = 1; i < 500; i++)
	{
		a = 3 * i;
		if (a < 1024)
			sum1 += a;
	}
	for (j = 1; j < 500; j++)
	{
		b = 5 * j;
		if (b < 1024)
		sum2 += b;
	}
	total = sum1 + sum2;
	printf("%d\n", total);
	return (0);
}
