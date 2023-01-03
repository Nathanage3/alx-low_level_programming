#include<stdio.h>
/**
 * print_number - print number
 * @n: integer 
 * Return: Empty
 */

void print_number(int n)
{
	if (n <= 9 && n >= -9)
	{
		putchar(n + '0');
	}
	else if ((n > 9 && n < 100) && (n < -9 && n > -100))
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
}
