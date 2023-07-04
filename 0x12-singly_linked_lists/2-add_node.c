#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - and node at the beginning
 * @head: The head node
 * @str: The string which is sthe data of the struct
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
