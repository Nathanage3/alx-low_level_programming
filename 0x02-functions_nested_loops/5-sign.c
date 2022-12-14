#include "main.h"

/**
 * print_sign - Chechs the sign of a number
 * %n - sign of the number to be printed
 * Return: 1 for + sign,  0 for 0 and -1 for -sign
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
