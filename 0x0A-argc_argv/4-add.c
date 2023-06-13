#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int result = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
