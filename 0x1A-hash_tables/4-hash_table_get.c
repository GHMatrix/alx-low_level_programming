#include "hash_tables.h"

/**
 * hash_table_get - Program value associated with
 * a key
 * @ht: pointer to hash table
 * @key: key to get value
 * Return: NULL if unmatched key, else value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	key_idx = key_index((const unsigned char *)key, ht->size);

	if (key_idx >= ht->size)
		return (NULL);

	current_node = ht->array[key_idx];

	while (current_node != NULL && strcmp(current_node->key, key) != 0)
		current_node = current_node->next;

	return ((current_node == NULL) ? NULL : current_node->value);
}
