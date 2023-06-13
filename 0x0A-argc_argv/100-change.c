#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, k = 0, m;
	int array[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (m >= array[i])
		{
			m -= array[i];
			k++;
		}
	}
	printf("%d\n", k);
	return (0);
}
