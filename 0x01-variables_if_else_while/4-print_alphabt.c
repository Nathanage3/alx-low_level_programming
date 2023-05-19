#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
