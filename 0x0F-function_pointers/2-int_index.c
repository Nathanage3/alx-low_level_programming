#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: compare values
 * Return: index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
