#include "main.h"
int _sqrt(int n, int start, int end);
/**
 * _sqrt_recursion - square root
 * @n: the number
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0, n));
}
/**
 * _sqrt - assists the sqrt recursion function
 * @n: number
 * @start: the beginning
 * @end: the last
 * Return: Always 0
 */
int _sqrt(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		_sqrt(n, mid + 1, end);
	}
	return (_sqrt(n, start, mid - 1));
}
