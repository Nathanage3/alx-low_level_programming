#include "hash_tables.h"
/**
 * hash_table_set - set the hash table
 * @ht: the created hash table
 * @key: the key of hash table
 * @value: the value of hashtable
 * Return: the newly set hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newItem = NULL;
	unsigned long int i;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	for (newItem = ht->array[i]; newItem; newItem = newItem->next)
	{
		if (strcmp(newItem->key, key) == 0)
		{
			free(newItem->value);
			newItem->value = strdup(value);
			if (!newItem->value)
				return (0);
			return (1);
		}
	}
	newItem = malloc(sizeof(hash_node_t));
	if (!newItem)
	{
		printf("Memory allocation failed");
		return (0);
	}
	newItem->key = strdup(key);
	newItem->value = strdup(value);
	if (!newItem->key || !newItem->value)
	{
		free(newItem->key);
		free(newItem->value);
		free(newItem);
		return (0);
	}
	newItem->next = ht->array[i];
	ht->array[i] = newItem;
	return (0);
}
