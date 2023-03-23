#include "main.h"
#include <stdio.h>

/**
*print_numbers -  print the numbers, from 0 to 9,
*	followed by a new line
*
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
