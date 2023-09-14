#include "lists.h"
/**
 * dlistint_len - print each value of the linked list
 * @h: the head of the list
 * Return: the number of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t  count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
