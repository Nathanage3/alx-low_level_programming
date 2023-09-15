#include "lists.h"

/**
 * sum_dlistint - returns the sum
 * @head: pointer to the list.
 * Return: sum 
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int total = 0;

	while (node)
	{
		total += node->n;
		node = node->next;
	}

	return (total);
}
