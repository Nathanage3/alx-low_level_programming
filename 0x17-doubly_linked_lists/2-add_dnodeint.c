#include "lists.h"
/**
 * add_dnodedint - adding node at the beginning
 * @head: the head
 * @n: the data of the linked list to be added
 * Return: a new linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}
