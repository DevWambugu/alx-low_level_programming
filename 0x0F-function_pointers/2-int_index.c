#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: array containing elements
*@size: number of elements in an array
*@cmp: a pointe rto the function to be used in
*	comparing values
*
*Return: returns -1 or index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
