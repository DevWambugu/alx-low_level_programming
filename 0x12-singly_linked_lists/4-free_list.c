#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
*free_list - frees a list_ list
*@head: pointer to node
*
*Return: void function
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
	free(head->str);
	temp = head->next;
	free(head);
	head = temp;
	}
}
