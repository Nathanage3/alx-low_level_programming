#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n_bytes;
	unsigned char *main_addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_addr = (unsigned char *)main;
	for (i = 0; i < n_bytes; i++)
	{
		printf("0x%02x ", main_addr[i]);
	}
	printf("\n");
	return (0);
}
