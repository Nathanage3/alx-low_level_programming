#include "main.h"
/**
 * print_sign - printing plus or minus signs
 * @n: the parameter to be tested
 * Return: Always 0 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
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
