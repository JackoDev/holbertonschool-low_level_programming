#include "hash_tables.h"
/**
 * key_index - return the index of a key
 * @key: the key
 * @size: size of the hash t array
 * Return: the index of the key inside the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
