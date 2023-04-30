#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*add_nodeint - adds new node at the beginning of a list
*@head: pointer to a pointer of ist of elements
*@n: integer
*
*Return: adress of new node or null if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
