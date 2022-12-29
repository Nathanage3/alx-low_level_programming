#include<stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int j, k, l;

	j = 0;

	for (j = 0; j < 10; j++)
	{
		for (k = j + 1; k < 9; k++)
		{
			for (l = k + 1; l < 10; l++)
			{
				putchar(j + '0');
				putchar(k + '0');
				putchar(l + '0');
				if (j == 7 && k == 8 && l == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
