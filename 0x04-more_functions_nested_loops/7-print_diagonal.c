#include "main.h"
/**
 * print_diagonal - prints a character in a diagonal
 * @n: an integer to be executed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int c, j;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		for (j = 0; j <= c; j++)
		{
			if (j == c)
			{
			_putchar('\\');
		_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
}
