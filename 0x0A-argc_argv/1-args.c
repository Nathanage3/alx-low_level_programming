#include <stdio.h>
#include "main.h"
/**
 * main - gives the number of arguments passed into main
 * @argc: tells how many arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (j = 0; *argv; j++, argv++)
		printf("%d\n", j - 1);
	}
	return (0);
}
