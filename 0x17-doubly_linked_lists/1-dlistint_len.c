#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*dlistint_len - returns the number of elements in a linked
*@h: pointer to first node
*
*Return: number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
