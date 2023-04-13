#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb:number of elements in an array
*@size: number of bytes
*
*Return: returns a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;
	char *j;
	unsigned int i, l;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	calloc = malloc(nmemb * size);
	l = (nmemb * size);
	if (calloc == NULL)
	{
		return (NULL);
	}
	j = calloc;
	for (i = 0; i < (l); i++)
		j[i] = '\0';
	return (calloc);
}
