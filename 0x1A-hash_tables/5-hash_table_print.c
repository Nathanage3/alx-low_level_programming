#include "hash_tables.h"
/**
 * hash_table_print - display
 * @ht: hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int comma_flag = 0;  /* To handle comma placement */

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma_flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
