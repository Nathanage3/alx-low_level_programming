#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocate memory
 * @b: memery size
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p = NULL)
	{
		exit(98);
	}
	return (p);
}
