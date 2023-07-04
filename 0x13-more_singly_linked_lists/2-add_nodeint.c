#include "lists.h"
/**
 * add_nodeint - add node
 * @head: head
 * @n: value
 * Return: The address of new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n  = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
