#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*insert_nodeint_at_index - inserts node at a given position
*@head: pointer to a pointer to a list
*@idx: index pf the listwhere the new node should be added
*@n: integer
*
*Return: returns NULL or address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *present_node;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else if (idx != 0)
	{
		present_node = *head;
		while (present_node)
		{
			if (counter == (idx - 1))
			{
				new_node->next = present_node->next;
				present_node->next = new_node;
				return (new_node);
			}
			present_node = present_node->next;
			counter++;
		}
	}
	free(new_node);
	return (NULL);
}
