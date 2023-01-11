#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main fuction
 * @argc: int value
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coin_count = 0;

	if (argc != 2)
	{printf("Error\n");
		return (1); }
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{cents -= 10; }
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{cents -= 1; }
		coin_count++;
	}
	printf("%d\n", coin_count);
	return (0);
}
