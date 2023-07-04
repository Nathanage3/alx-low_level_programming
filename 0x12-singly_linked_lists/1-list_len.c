#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - list length
 * @h: head
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
