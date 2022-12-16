#include "main.h"
/**
 * print_most_numbers - prints the most number
 * Return: empty
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48 ; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
