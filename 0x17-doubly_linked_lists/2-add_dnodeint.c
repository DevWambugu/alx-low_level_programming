#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list
*@head: pointer to a pointer to first node
*@n: data in the node
*
*Return: BULL or an address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node;

	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
	{
		return (NULL);
	}
	new_Node->n = n;
	new_Node->prev = NULL;
	new_Node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_Node;
		*head = new_Node;
	}
	return (new_Node);
}
