#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
*list_len - returns number of elements in a linked n list
*@h: pointer to the linked list
*
*Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
