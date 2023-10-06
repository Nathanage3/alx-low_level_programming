#include "hash_tables.h"
/**
 * hash_table-delete - delete hashtable
 * @ht: hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp_node;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp_node;
		}
	}
    free(ht->array);
    free(ht);
}
