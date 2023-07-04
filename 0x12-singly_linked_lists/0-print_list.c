#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list -print list
 * @h: head
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		k++;
		h = h->next;
	}
	return (k);
}
