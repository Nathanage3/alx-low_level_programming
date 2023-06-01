#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of item to be reversed
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
