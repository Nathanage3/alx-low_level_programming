#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: the character used to draw the line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
