#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*reverse_listint - reversea a linked list
*@head: pointer to the first node
*
*Return: returns a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *present_node = *head, *next, *previous_node = NULL;

	while (present_node != NULL)
	{
		next = present_node->next;
		present_node->next = previous_node;
		previous_node = present_node;
		present_node = next;
	}
	*head = previous_node;
	return (previous_node);
}
