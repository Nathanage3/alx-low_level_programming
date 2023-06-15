#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realloc
 * @ptr: void pointer
 * @old_size: previous size
 * @new_size: new size
 * Return: void pointer value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned char *p, *pp;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
		{exit(1); }
		return (new); }
	if (new_size == old_size)
	{return (ptr); }
	new = malloc(new_size);
	if (new == NULL)
	{exit(1); }
	p = (unsigned char *)ptr;
	pp = (unsigned char *)new;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		pp[i] = p[i];
	}
	free(ptr);
	return (pp);
}
