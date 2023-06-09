#include "hash_tables.h"

/**
 * key_index - Program gets the index at
 * storage in array of a hash table
 * @key: key to get the index
 * @size: size of array of hash
 * Return: index for success
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
