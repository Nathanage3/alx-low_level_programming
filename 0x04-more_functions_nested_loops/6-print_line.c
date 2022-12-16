#include "main.h"
/**
 * print_line - Prints lines
 * @n: the number of times the character to appear
 * Return: Always return 0 and less
 */
void print_line(int n)
{
	char b;

	for (b = 0; b < n; b++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
