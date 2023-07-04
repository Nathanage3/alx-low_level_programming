#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print int
 * @h: head node
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
