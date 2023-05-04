#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*flip_bits - returns the number of bits you would need to flip
*	to get from one number to another
*@n: long integer n
*@m: long integer m
*
*Return: returns the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result != 0)
	{
		i += (result & 1);
		result >>= 1;
	}
	return (i);
}
