#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*free_dlistint - free the list
*@head: pointer to first node
*
*Return:NULL
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (head != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
