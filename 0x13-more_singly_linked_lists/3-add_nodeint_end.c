#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*add_nodeint_end - adds a node at the end of a ist
*@head: pointer to the a pointer to the list
*@n: integer to be assigned
*
*Return: NULL or address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *present_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		present_node = *head;
		while (present_node->next != NULL)
		{
			present_node = present_node->next;
		}
		present_node->next = new_node;
	}
	return (*head);
}
