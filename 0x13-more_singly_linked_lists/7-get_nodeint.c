#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: pointer to list
*@index: index of the node
*
*Return: returns the nth node of a listint_t linked list or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *present_node = head;

	while (present_node != NULL)
	{
		if (count == index)
		{
			return (present_node);
		}
		count++;
		present_node = present_node->next;
	}
	return (NULL);
}
