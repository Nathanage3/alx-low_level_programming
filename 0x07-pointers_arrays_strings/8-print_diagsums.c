#include "main.h"
/**
 * print_diagsums - ddiag sum
 * @a: a
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0, sum_2 = 0;

	for (; i < size; i++)
	{
		sum += a[i * size + i];
		sum_2 += a[(i + 1) * (size - 1)];
	}
	printf{"%d, %d\n", sum, sum_2};
}
