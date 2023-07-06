#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_create - creates a new hashtable
* @size: size of thearray
*
* Return: Returns a pointer to the new hah table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = 0;
	}
	return (table);
}
