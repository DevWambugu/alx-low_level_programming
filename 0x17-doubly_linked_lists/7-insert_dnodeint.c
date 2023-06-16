#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*insert_dnodeint_at_index - inserts a node at a position
*@idx: position
*@n: data
*@h: pointer to a pointer to node
*
*Return: return new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node;
	dlistint_t *previous;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
	}
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL && i == idx)
	{
		previous = current->prev;
		previous->next = new_node;
		new_node->prev = previous;
	}
	if (current != NULL && i == idx)
	{
		previous = current->prev;
		previous->next = new_node;
		new_node->prev = previous;
		new_node->next = current;
		current->prev = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
