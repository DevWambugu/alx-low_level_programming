#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
*find_listint_loop - finds loop in a lnked in list
*@head: pointer to the first node
*
*Return: address where the loop starts or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_pointer;
	listint_t *fast_pointer;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	slow_pointer = head->next;
	fast_pointer = head->next->next;
	while (fast_pointer != NULL && fast_pointer->next != NULL)
	{
		if (slow_pointer == fast_pointer)
		{
			break;
		}
		slow_pointer = slow_pointer->next;
		faster_pointer = fast_pointer->next->next;
	}
	if (slow_pointer != faster_pointer)
	{
		return (NULL);
	}
	slow_pointer = head;
	while (slow_pointer != faster_pointer)
	{
		slow_pointer = slow_pointer->next;
		faster_pointer = faster_pointer->next;
	}
	return (slow_pointer);
}
