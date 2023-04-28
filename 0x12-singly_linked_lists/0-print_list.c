#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_list - prints all elements of a list_t list
*@h: pointer to the list to be printed
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t j = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	while (h != NULL)
	{
		printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
