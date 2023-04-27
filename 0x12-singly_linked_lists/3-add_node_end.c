#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
*add_node_end - ads a new node at the end of the list
*@str: string to be duplicated
*@head: pointer to node
*
*Return: null or address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	char *new_string;
	list_t *present_node = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	new_string = strdup(str);
	if (new_string == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->str = new_string;
	n_node->len = strlen(new_string);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while (present_node->next != NULL)
	{
		present_node = present_node->next;
	}
	present_node->next = n_node;
	return (n_node);
}
