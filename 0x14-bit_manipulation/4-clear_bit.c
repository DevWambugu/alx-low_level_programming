#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*clear_bit - sets the value of a bit to 0 at a given index
*@n: pointer to a long integer
*@index: index to be changed
*
*Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
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
	}
	return (1);
}
