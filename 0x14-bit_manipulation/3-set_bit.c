#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: pointer to a long
*@index: index
*
*Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_position = ((sizeof(long) * 8) - 1);
	unsigned long int mask = ~(1UL << index);

	if (index > bit_position)
	{
		return (-1);
	}
	else
	{
		*n &= mask;
		*n |= (1UL << index);
	}
	return (0);
}
