#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: size of array
 * @size: memory byte per element of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int total, i;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	p = malloc(total);
	if (p == NULL)
	{
		exit(98);
	}
	byte_ptr = (unsigned char *)p;
	for (i = 0; i < total; i++)
	{
		byte_ptr[i] = 0;
	}
	return (p);
}
