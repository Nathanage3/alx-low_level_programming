#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop list integer
 * @head: pointer to the pointer head list
 * Return: The head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
