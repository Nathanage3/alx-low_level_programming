#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *product;
	int i;

	if (argc != 3)
	{
		write(2, "Error\n", 6);
		exit(98); }
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			write(2, "Error\n", 6);
			exit(98); }
	}
	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			write(2, "Error\n", 6);
			exit(98); }
	}
	product = multiply(num1, num2);
	write(1, product, _strlen(product));
	write(1, "\n", 1);
	free(product);
	return (0);
}
