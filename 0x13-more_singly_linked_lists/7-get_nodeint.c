#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get index
 * @head: pointer to the pointer head list
 * @index: index
 * Return: nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int k = 0;

	while (temp != NULL)
	{
		if (k == index)
			return (temp);
		k++;
		temp = temp->next;
	}
	return (NULL);
}
