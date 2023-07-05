#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - node at index
 * @head: pointer to the pointer head list
 * @idx: index
 * @n: int n
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *curr;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	curr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
	}
	if (curr == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = curr->next;
	curr->next = newNode;

	return (newNode);
}
