#include "main.h"
#include <stdio.h>
/**
 * print_array - print the value of array
 * @a: array
 * @n: index of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
