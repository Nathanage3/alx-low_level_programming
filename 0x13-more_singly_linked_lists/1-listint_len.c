#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - list integer length
 * @h: head
 * Return:
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
