#include "main.h"
/**
 * print_line - print a line using a loop function
 * @n: the number of underscore to draw a line
 * Return: Always 0 for success and return 1 for failure
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
