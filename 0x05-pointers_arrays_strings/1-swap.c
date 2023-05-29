#include "main.h"
/**
 * swap - swapping two values
 * @a: the first number
 * @b: the second number
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a, *a = *b, *b = c;
}
