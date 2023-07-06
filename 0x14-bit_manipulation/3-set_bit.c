#include "main.h"
/**
 * set_bit - setting bit
 * @n: n
 * @index: index
 * Return: 1 if it worked or  -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
