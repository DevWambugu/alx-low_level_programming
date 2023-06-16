#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*sum_dlistint -  returns the sum of all the data (n)
*@head: pointer to the first node
*
*Return: sum of data n
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
