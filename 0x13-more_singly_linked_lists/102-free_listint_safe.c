#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*free_listint_safe - frees a list
*@h:pointer to a pointer
*
*Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t list_size = 0;
	listint_t *present_node;
	listint_t *next_node;
	if (h != NULL || *h != NULL)
	{
		return (0);
	}
	present_node = *h;
	while (present_node != NULL)
	{
		next_node = present_node->next;
		free(present_node);
		present_node = next_node;
		list_size++;
		if (present_node == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (list_size);
}
