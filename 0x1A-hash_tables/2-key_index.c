#include "hash_tables.h"
/**
 * key_index - key index
 * @key: key of hashtable
 * @size: size of hashtable
 * Return: the index of hashtable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2(key);
	return (idx % size);
}
