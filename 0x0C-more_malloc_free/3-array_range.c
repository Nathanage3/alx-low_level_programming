#include "main.h"
#include <stdlib.h>
/**
 * array_range - increasing order
 * @min: min value
 * @max: max value
 * Return: Always 0 on success and 1 failure
 */
int *array_range(int min, int max)
{
	int *new_array, i, size;

	size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	new_array = malloc(sizeof(int) * size);
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_array[i] = min++;
	}
	return (new_array);
}
