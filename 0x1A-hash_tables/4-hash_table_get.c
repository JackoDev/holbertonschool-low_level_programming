#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @key: the key of the ht
 * @ht: pointer to the ht
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tempo;
	unsigned long int line;

	if (ht == NULL || key == NULL)
		return (NULL);
	line = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[line];
	while (tempo)
	{
		if (strcmp(tempo->key, key) == 0)
			return (tempo->value);
		tempo = tempo->next;
	}
	return (NULL);
}
