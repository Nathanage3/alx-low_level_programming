#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;

	int a;

	a = 0;
	c = 'a';
	while (a < 10)
	{
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
