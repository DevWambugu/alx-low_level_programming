#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* key_index - gives the index of a key
* @key: key
* @size: size of the array of the hash table
*
*Return: Returns the index at which the key/value
*	pair should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
