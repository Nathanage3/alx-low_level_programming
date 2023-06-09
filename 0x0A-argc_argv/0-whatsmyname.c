#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	argc = 0;

	while (argv[0][argc] != '\0')
	{
		_putchar(argv[0][argc]);
		argc++;
	}
	_putchar('\n');
	return (0);
}
