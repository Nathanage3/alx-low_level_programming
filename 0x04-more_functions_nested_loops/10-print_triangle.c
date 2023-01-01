#include <stdio.h>
/**
 * print_triangle - prints triangle
 * @size: size of character
 * Return: empty
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
