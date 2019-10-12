#include "hash_tables.h"
/**
 * hash_table_delete - delete a ht
 * @ht: pointer to the ht
 * Return: its a void function
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempo, *tempo2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tempo = ht->array[i];
			while (tempo->next != NULL)
			{
				tempo2 = tempo->next;
				if (tempo != NULL)
				{
					free(tempo->value);
					free(tempo->key);
					free(tempo);
				}
				tempo = tempo2;
			}
			if (tempo != NULL)
			{
				free(tempo->value);
				free(tempo->key);
				free(tempo);
			}
		}
	}
	if (ht != NULL)
	{
		free(ht->array);
		free(ht);
	}
}
