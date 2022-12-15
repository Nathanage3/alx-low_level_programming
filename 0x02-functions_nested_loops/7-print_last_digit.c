#include "main.h"
/**
 * print_last_digit - Checks the last digit of a number
 * @n: The number to be executed
 * Return: The value of last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (n < 0)
	{
		ld =  ld * -1;

	}
	_putchar(ld + '0');
	return (ld);
}
