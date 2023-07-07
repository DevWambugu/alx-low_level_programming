#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - prints the hash table
* @ht: pointer to the hash table
*
* Return: void function
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int empty_table = 1;
	int count = 0;

	/*check if the table is NULL*/
	if (ht == NULL)
		return;
	/*check if ht is empty*/
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			empty_table = 0;
			break;
		}
	}
	if (empty_table)
	{
		printf("{}\n");
		return;
	}
	/*A for loop to traverse the indeces of the array*/
	/*determined by size of table*/
	/*The last node of the array is NULL SO IT WON't be printed*/
	/*at the current array node, access the linked list*/
	/*print out the key and value in the list*/
	/*move to the next value in the list till the end*/
	/*move to the next array index and repeat*/
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
		printf("'%s': '%s', ", current->key, current->value);
		current = current->next;
		count++;
		}
	}
	/*use the count variable to keep track of the pairs*/
	if (count > 0)
	{
		printf("\b\b");
	}
	printf("}\n");
}
