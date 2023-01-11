#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * create_array - array of size
 * @size: size of the array
 * @c: character to be executed
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
