#include "main.h"
/**
 * _pow_recursion - power of a number in recursion function
 * @x: the base
 * @y: the exponent
 * Return: Always 0 for success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
