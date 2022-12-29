#include <stdio.h>
/**
 * main - main function
 *Return: Always 0
 */

int main(void)
{
	long long int  n, i;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%lli ", i);
			n = n / i;
			i--;
		}
	}
	printf("\n");
	return (0);
}
