#include "main.h"
/**
 * factorial - find factorial of non negative integer
 * @n: the number to be executed
 * Return: Always 0 for success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
