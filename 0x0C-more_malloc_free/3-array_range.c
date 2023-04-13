#include <stdlib.h>
#include "main.h"

/**
*array_range - creates an array of integers
*@min: minimum value
*@max: maximum value
*
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int length = 0;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		length++;
	}
	array = malloc(length * sizeof(int));
	for (i = min; i <= max; i++)
	{
		array[j++] = i;
	}
	return (array);
}
