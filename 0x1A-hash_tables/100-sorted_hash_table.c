#include "hash_tables.h"

/**
 * shash_table_create - Program creates hash table.
 * @size: The size of new array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(shash_table_t));
	if (htable == NULL)
	return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(shash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}


/**
 * shash_table_set - Program adds element to hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	char *value_copy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
	return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}

/**
 * shash_table_get - Program retrieves value associated with  key
 * in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with the key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
	unsigned long int key_idx;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	key_idx = key_index((const unsigned char *)key, ht->size);

	if (key_idx >= ht->size)
	return (NULL);

	current_node = ht->shead;

	while (current_node != NULL && strcmp(current_node->key, key) != 0)
	current_node = current_node->snext;

	return ((current_node == NULL) ? NULL : current_node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
	return;

	current_node = ht->shead;
	printf("{");

	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;

	if (current_node != NULL)
	printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Program printss hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
	return;

	current_node = ht->stail;
	printf("{");

	while (current_node != NULL)
	{
	printf("'%s': '%s'", current_node->key, current_node->value);
	current_node = current_node->sprev;

	if (current_node != NULL)
	printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_delete - Program deletes a  hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
	return;

	node = ht->shead;

	while (node)
	{
	tmp = node->snext;
	free(node->key);
	free(node->value);
	free(node);
	node = tmp;
	}

	free(head->array);
	free(head);
}
