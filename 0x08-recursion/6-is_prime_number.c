#include "main.h"
/**
 * prime2 - two
 *@x: the same number as n
 *@y: the number that iterates from 1 to n 
 *Return: 1
 *   */

int prime2(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	        return (prime2(x, y + 1));
}
/**
 * is_prime - yes
 * @n: integer
 * Return: 0
 */
int is_prime_recursion(int n)
{
	   if (n <= 1)
		      return (0);
	      return (prime2(n, 2));   
}
