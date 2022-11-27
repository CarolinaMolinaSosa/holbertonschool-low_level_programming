#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: address of hash table to which we shall add
 * @key: key to add
 * @value: value to add
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki;
	hash_node_t *node = NULL;
	char *new_key = strdup(key), *new_value = strdup(value);

	if (!ht)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node || !new_key || !new_value)
	{
		if (node)
			free(node);
		if (new_key)
			free(new_key);
		if (new_value)
			free(new_value);
		return (0);
	}
	ki = key_index((unsigned char *)new_key, ht->size);
	node->key = new_key;
	node->value = new_value;
	if (!ht->array[ki])
	{
		ht->array[ki] = node;
		node->next = NULL;
	} else
	{
		if (strcmp(ht->array[ki]->key, new_key) == 0)
		{
			free(ht->array[ki]->value);
			ht->array[ki]->value = new_value;
			free(node->key);
			free(node);
		} else
		{
			node->next = ht->array[ki];
			ht->array[ki] = node;
		}
	}
	return (1);
}
