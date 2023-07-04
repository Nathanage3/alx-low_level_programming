#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free linstint
 * @head: pointer to pointer head list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *cur;

	temp = head;
	while (temp != NULL)
	{
		cur = temp;
		temp = temp->next;
		free(cur);
	}
}
