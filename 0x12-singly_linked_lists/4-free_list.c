#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
*free_list - frees a list_ list
*@head: pointer to node
*
*Return: void function
*/
void free_list(list_t *head)
{
	list_t *present = head;
	list_t *next;

	if (head == NULL)
	{
		return;
	}
	while (present != NULL)
	{
		next = present->next;
		free(present);
		present = next;
	}
}
