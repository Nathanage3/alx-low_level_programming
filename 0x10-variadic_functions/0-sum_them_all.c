#include "variadic_functions.h"
/**
 * sum_them_all - to sum the elements of argument
 * @n: number of argument
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, num;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
