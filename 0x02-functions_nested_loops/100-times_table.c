#include <stdio.h>
/**
 * print_times_table - main funtion
 * @n: the size of times table
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i, j, c;

	if (n >= 0 && n < 15)
	{

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			c = (i * j);
			if (c <= 9)
			{
				printf("%d", c);
				if (j == n)
					continue;
				printf(",");
				printf("   ");
			}
			else if (c >= 10 && c < 100)
			{
				printf("%d", c);
				if (j == n)
					continue;
				printf(",");
				printf("  ");
			}
			else if (c >= 100 && c <= 196)
			{
				printf("%d", c);
				if (j == n)
					continue;
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	}

}
