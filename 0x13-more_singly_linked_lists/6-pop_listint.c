#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*pop_listint - deletes the head node of a listint_t linked list
*	 and returns the head node’s data (n).
*@head: pointer to a pointer to list
*
*Return:  returns the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	int nodes_data = (*head)->n;
	listint_t *temporary = *head;

	if (head != NULL)
	{
		*head = (*head)->next;
		free(temporary);
	}
	else if (head == NULL)
	{
		return (0);
	}
	return (nodes_data);
}
