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
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
