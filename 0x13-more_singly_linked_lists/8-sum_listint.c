#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum the list
 * @head: pointer to the pointer head list
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
