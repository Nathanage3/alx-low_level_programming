#include "main.h"
/**
 * print_number - print the passed number from the main function
 * @n: the number to be tested
 * Return: 0
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10000)
	{
		_putchar('0' + n / 10000);
		n %= 10000;
	}
	if (n >= 1000)
	{
		_putchar('0' + n / 1000);
		n %= 1000;
	}
	if (n >= 100)
	{
		_putchar('0' + n / 100);
		n %= 100;
	}
	if (n >= 10)
	{
		_putchar('0' + n / 10);
		n %= 10;
	}
	_putchar('0' + n);
}
