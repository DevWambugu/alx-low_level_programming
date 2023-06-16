#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
*@head: pointeer to the head node
*@index: unsigned integer whose node is to be identified
*
*Return: NULL or nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && index > 0)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
