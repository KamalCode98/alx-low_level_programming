#include "hash_tables.h"

/**
 * key_index - Calculate the index where a key/value pair
 * should be stored in the array of a hash table.
 * @key: The key to determine the index for.
 * @size: The size of the hash table's array.
 *
 * Return: The calculated index for the given key.
 * Description: Utilizes the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
