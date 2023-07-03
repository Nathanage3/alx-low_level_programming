#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list -print list
 * @h: head
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		k++;
		h = h->next;
	}
	return (k);
}
