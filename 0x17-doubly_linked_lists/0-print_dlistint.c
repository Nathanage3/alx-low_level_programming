#include "lists.h"
/**
 * print_dlistint - print each value of the linked list
 * @h: the head of the list
 * Return: the data of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t  count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
