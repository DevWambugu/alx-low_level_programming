#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*@b: unsigned integer
*
*Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *mem = &b;

	mem = malloc(sizeof(int));
	if (mem == NULL)
	{
		exit(98);
	}
	else
	{
		return (mem);
	}
}
