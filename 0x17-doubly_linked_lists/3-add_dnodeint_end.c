#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: head
 * n: the data to be added
 * Return: new linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
