#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_listint2 - frees lsist and assigns head to NULL
*@head: pointer to a pointer to list
*
*Return: Void function
*/
void free_listint2(listint_t **head)
{
	listint_t *present_node;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			present_node = *head;
			*head = (*head)->next;
			free(present_node);
		}
		*head = NULL;
	}
}
