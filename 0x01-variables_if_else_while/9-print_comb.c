#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
