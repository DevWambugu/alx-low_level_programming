#include <strings.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*delete_nodeint_at_index - deletes a node at a specific index
*@head: pointer to a pointer to list
*@index: the index
*
*Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present_node;
	listint_t *previous_node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	else if (head != NULL || *head != NULL)
	{
		present_node = *head;
		previous_node = NULL;
		while (count < index && present_node != NULL)
		{
			previous_node = present_node;
			count++;
			present_node = present_node->next;
		}
		if (present_node == NULL)
		{
			return (-1);
		}
		if (previous_node == NULL)
		{
			*head = present_node->next;
		}
		else
		{
			previous_node->next = present_node->next;
		}
	}
	free(present_node);
	return (1);
}
