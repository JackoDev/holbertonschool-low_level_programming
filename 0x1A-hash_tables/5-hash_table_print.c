#include "hash_tables.h"
/**
 * hash_table_print - print the key and the value of the ht
 * @ht: pointer to the ht
 * Return: its a void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tempo;
	unsigned long int a = 0, b = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (a < ht->size)
	{
		if (ht->array[a] != NULL)
		{
			tempo = ht->array[a];
			while (tempo != NULL)
			{
				if (b == 1)
					printf(", ");
				printf("'%s': '%s'", tempo->key, tempo->value);
				b = 1;
				tempo = tempo->next;
			}
		}
		a++;
	}
	printf("}\n");
}
