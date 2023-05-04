#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*get_bit -  returns the value of a bit at a given index
*@n: integer
*@index: index
*
*Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_position = ((sizeof(long) * 8) - 1);
	unsigned int bit, i = 0;

	if (index > bit_position)
	{
		return (-1);
	}
	for (i = 0; i <= bit_position; i++)
	{
		if (i == index)
		{
			bit = (n >> i) & 1;
		}
	}
	return (bit);
}
