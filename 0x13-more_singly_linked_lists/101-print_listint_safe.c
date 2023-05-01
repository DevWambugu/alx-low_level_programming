#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*print_listint_safe - print linked list
*@head: pointer to te first node
*
*Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *present_node;
	listint_t *previous_node;

	for (; head != NULL; head = head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		present_node = head;
		head = head->next;
		for (; previous_node && previous_node < present_node;
			previous_node = previous_node->next)
		{
			if (previous_node == present_node->next)
			{
				exit(98);
			}
			else if (previous_node == present_node)
			{
				break;
			}
		}
	}
	return (counter);
}
