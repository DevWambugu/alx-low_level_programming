#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_get - returns the value associated with the element
* @ht: the hash table
* @key: the key
*
*Return: returns the value of key or Null if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	/*Get the index of the key and then access the current*/
	/*node in the linked list. Proceed to traversing the*/
	/*whole list til. you find a match to your key using strcmp*/
	/*if similar return the current value by accessing*/
	/*the data structure*/
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
