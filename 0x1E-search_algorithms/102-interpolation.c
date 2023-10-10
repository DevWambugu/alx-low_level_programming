#include <stdio.h>
#include "search_algos.h"
/**
  *interpolation_search - apply the interpolation algo to search the value
  *@array: a pointer to the first value in an array
  *@size: The size of the array
  *@value: The value to search
  *
  *Return: the value or -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}