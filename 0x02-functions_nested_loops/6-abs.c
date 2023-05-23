#include "main.h"
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
