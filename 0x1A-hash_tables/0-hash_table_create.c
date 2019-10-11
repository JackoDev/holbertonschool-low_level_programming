#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the hash t
 * Return: a pointer to the new ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newht;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	newht = malloc(sizeof(hash_table_t));
	if (newht == NULL)
		return (NULL);
	newht->size = size;
	newht->array = malloc(sizeof(hash_node_t *) * size);
	if (newht->array == NULL)
	{
		free(newht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newht->array[i] = NULL;
	}
	return (newht);
}
