#include "hash_tables.h"
/**
 * hash_table_set - add a element into a ht
 * @ht: pointer to the ht
 * @key: the key of the ht
 * @value: value asocciated with the key
 * Return: 1 on succes 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tempo;
	unsigned long int line;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	line = key_index((const unsigned char *)key, ht->size);
	if (ht->array[line] == NULL)
	{
		ht->array[line] = new;
		new->key = strdup(key), new->value = strdup(value);
		if (new->key == NULL || new->value == NULL)
			return (0);
		new->next = NULL; }
	else
	{
		tempo = ht->array[line];
		while (tempo)
		{
			if (strcmp(tempo->key, key) == 0)
			{
				free(tempo->value);
				free(new);
				tempo->value = strdup(value);
				if (tempo->value == NULL)
					return (0);
				return (1); }
			tempo = tempo->next; }
		tempo = ht->array[line];
		new->key = strdup(key), new->value = strdup(value);
		if (new->key == NULL || new->value == NULL)
			return (0);
		new->next = tempo, ht->array[line] = new; }
	return (1);
}
