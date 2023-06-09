#include "hash_tables.h"

/**
 * hash_table_delete - Program deletes hash table
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
	if (ht->array[index] != NULL)
	{
	hash_node_t *current_node = ht->array[index];

	while (current_node != NULL)
	{
		hash_node_t *next_node = current_node->next;

		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = next_node;
		}
	}
	}

	free(head->array);
	free(head);
}
