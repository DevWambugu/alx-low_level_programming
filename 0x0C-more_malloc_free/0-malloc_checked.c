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
	void *malloc_checked1 = malloc(sizeof(int) * b);

	if (malloc_checked1 == NULL)
	{
		exit(98);
	}
	else
	{
		return (malloc_checked1);
	}
}
