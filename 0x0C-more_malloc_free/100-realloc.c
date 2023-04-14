#include "main.h"
#include <stdlib.h>

/**
*_realloc - reallocates a block of memory using malloc and free
*@ptr: pointer to previous block of memory
*@new_size: size of the new block of memory
*@old_size: size of the previously allocated block of memory
*
*Return: this is a void function
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *realloc;
	char *ptr1;
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = ptr;
	realloc = malloc(sizeof(*ptr1) * new_size);
	if (realloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		realloc[i] = ptr1[i];
	}
	free(ptr);
	return (realloc);
}
