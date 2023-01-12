#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocate memory
 * @k: integer
 * Return: output
 */

void *malloc_checked(unsigned int k)
{
	void *p = malloc(k);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
