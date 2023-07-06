#include "main.h"
/**
 * flip_bits - reversing
 * @n: the int
 * @m: to be flipped
 * Return: the flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res_xor = n ^ m;
	unsigned int k = 0;

	while (res_xor != 0)
	{
		k += res_xor & 1;
		res_xor >>= 1;
	}
	return (k);
}
