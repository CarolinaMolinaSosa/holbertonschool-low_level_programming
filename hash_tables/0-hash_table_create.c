#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - creates a hashtable
 * @size: size of the array
 *
 * Return: on succes returns a pointer to the newly created hash table, else return NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
