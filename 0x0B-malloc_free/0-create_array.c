#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars
*@size: memory size
*@c: specific char
*
*Return: Returns null if size is zero. Returns
*	a pointer to an array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
