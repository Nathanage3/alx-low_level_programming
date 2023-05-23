#include "main.h"
/**
 * print_last_digit - printing the last digit of the given number
 * @c: the number to be evaluated
 * Return: Always 0 on success and 1 for failure
 */
int print_last_digit(int c)
{
	int i;

	i = c % 10;
	_putchar(i + 48);
	return (i);
}
