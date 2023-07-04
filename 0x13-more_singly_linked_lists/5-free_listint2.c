#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
