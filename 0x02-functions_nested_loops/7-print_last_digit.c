#include "main.h"
/**
 * print_last_digit - printing the last digit of the given number
 * @c: the number to be evaluated
 * Return: Always 0 on success and 1 for failure
 */
int _abs(int);
int print_last_digit(int c)
{
	int i;

	i = _abs(c) % 10;
	_putchar('0' + i);
	return (i);
}
/**
 * _abs - absolute value of a number
 * @n: the number to be evaluated
 * Return: Always 0 on success and 1 for failure
 */
int _abs(int n)
{
        if (n > 0)
                return (n);
        else if (n == 0)
                return (0);
        else
                return (-n);
}

