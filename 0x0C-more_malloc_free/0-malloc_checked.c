#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocate memory
 * @k: integer
 */

void *malloc_checked(unsigned int k)
{
	void *ptr = malloc(k);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
