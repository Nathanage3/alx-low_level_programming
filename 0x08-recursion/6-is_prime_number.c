#include "main.h"
int is_prime(int n, int divisor);
/**
 * is_prime_number - check for prime number
 * @n: integer
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - assist is prime number function
 * @n: an integer
 * @divisor: the divisor
 * Return: Always 0
 */
int is_prime(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime(n, divisor + 1));
}
