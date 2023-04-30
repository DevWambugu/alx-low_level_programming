#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*listint_len - returns the number of elements in a linked list
*listint_len - returns number of elements
*@h: pointer to elements
*
*Return: returns no of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	for (counter = 0; h; counter++)
	{
		h = h->next;
	}
	return (counter);
}
