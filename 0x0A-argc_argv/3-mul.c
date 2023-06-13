#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 1, pro = 1;

	while (i < argc)
	{
		pro *= atoi(argv[i]);
		i++;
	}
	if (i == 3)
	{
		printf("%d\n", pro);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
