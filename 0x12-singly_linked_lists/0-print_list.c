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
	size_t i = 0;

	while (h != 0)
	{
		printf("[%d] %s \n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
