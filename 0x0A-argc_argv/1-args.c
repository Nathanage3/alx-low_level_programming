#include <stdio.h>
#include "main.h"
/**
 * main - gives the number of arguments passed into main
 * @argc: tells how many arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
