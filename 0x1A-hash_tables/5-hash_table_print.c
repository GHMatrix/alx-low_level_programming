#include "hash_tables.h"

/**
 * hash_table_print - Program prints hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned char comma_flag = 0;
	hash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");

	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (comma_flag)
				printf(", ");

			current_node = ht->array[index];
			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
				if (current_node)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
