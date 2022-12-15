#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)

{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
	{
		putchar(i); /* i need to be incremeted by 1 or i++ is missed */
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
