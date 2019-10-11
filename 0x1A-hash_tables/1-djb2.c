#include "hash_tables.h"
/**
 * hash_djb2 - function implementing the djb2 algorithm
 * @str: key to store
 * Return: a hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
