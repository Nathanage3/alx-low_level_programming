#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;

	int a;

	
	for (a = 0; a < 10; a++)
	{
		_putchar('\n');
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
}
