#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*free_listint - frees a list
*@head: pointer to list of elements
*
*Return: void function
*/
void free_listint(listint_t *head)
{
	listint_t *present_node, *next;

	present_node = head;
	while (present_node != NULL)
	{
		next = present_node->next;
		free(present_node);
		present_node = next;
	}
}
