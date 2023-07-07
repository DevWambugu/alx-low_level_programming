#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
*
* Return: Void function
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *current;
	
	/*start by checking if the ht is NULL*/
	/*If NULL, return void, nothing to freee*/
	if (ht == NULL)
	{
		return;
	}
	/*By understanding the structure of a hash table*/
	/*start with the first array node array[0].*/
	/*It's going to be your current list*/
	/*while on the node, access the linked list*/
	/*The list contains the key and values as items of the DS*/
	/*start freeing the memory for each*/
	/*loop through all array indeces and repeat the process*/
	for (j = 0; j < ht->size; j++)
	{
		current = ht->array[j];
		while (current != NULL)
		{
			free(current->key);
			free(current->value);
			free(current);
			current = current->next;
		}
	}
	/*once you free the linked list, free the array*/
	/*The free the table*/
	free(ht->array);
	free(ht);
}
