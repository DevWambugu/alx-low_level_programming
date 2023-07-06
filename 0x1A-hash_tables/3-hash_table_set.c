#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_set - adds an element to a hash table
* @ht: pointer to the hash table
* @key: key value
* @value: this is the value associated with the key
*
*Return: Returns 1 or 0 depending on outcome
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new_node;
	char *copy_of_value;

	if ((ht == NULL) || (key == NULL) || (*key == '\0'))
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	/*create a new node for the key value pair*/
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	/*create a duplicate of the value*/
	copy_of_value = strdup(value);
	if (copy_of_value == NULL)
	{
		free(copy_of_value);
		return (0);
	}
	/*set the value for the new node*/
	new_node->key = strdup(key);
	new_node->value = copy_of_value;
	new_node->next = NULL;
	/*check if the node is empty*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		/*this block means a collision occured and hence a new*/
		/*should be at the beginning of the list*/
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	/*on success return 1*/
	return (1);
}
