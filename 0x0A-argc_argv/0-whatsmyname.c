#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
