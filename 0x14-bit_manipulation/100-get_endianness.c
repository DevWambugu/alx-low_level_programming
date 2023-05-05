#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*get_endianness - checks the endianness
*
*Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int j = 1;
	char *c = (char *)(&j);

	if (*c == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
