#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*delete_dnodeint_at_index - deletes a node at a specific index
*@head: pointer to the first node
*@index: integer
*
*Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *next_node = NULL;
	dlistint_t *previous = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			next_node = current->next;
			previous = current->prev;
			if (previous != NULL)
			{
				previous->next = next_node;
			}
			else
			{
				*head = next_node;
			}
			if (next_node != NULL)
			{
				next_node->prev = previous;
			}
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
