#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*print_binary - prints the binary representation of a number
*@n: integer to be converted
*
*Return: Nothing
*/
void print_binary(unsigned long int n)
{
	int bit_position = ((sizeof(long) * 8) - 1);
	int flag = 0;

	while (bit_position >= 0)
	{
		if ((n >> bit_position) & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		bit_position--;
	}
	if (flag == 0)
	{
		_putchar('0');
	}
}
