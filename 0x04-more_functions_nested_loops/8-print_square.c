#include "main.h"
/**
 * print_square - prints a square box
 * @size: ize of the square
 * Return: Always 0 for success and return 1 for failure
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
