#include <stdio.h>
/**
 * main - main function
 * Return: Always 0 for success
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
