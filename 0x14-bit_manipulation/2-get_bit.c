#include "main.h"
/**
 * get_bit - get bit
 * @n: the decimal number
 * @index: index
 * Return: The value of the bibt at index index or -1 if error occured
 */
int get_bit_recursive(unsigned long int n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (get_bit_recursive(n, index));
}
/**
 * get_bit_recursive - helper function
 * @n: n
 * @index: index
 * Return: The value of the bit
 */
int get_bit_recursive(unsigned long int n, unsigned int index)
{
	if (index == 0)
		return (n & 1);
	if (n > 1)
		return (get_bit_recursive(n >> 1, index - 1));

	return (-1);
}
