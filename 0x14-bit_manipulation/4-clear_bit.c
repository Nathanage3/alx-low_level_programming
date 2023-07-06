#include "main.h"
/**
 * clear_bit - free bit
 * @n: pointer to number in decimal
 * @index: index
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((*n >> index) & 1)
		*n ^= (1UL << index);

	return (1);
}
