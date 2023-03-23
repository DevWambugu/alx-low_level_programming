#include "main.h"
#include <stdio.h>
/**
*more_numbers - prints 10 times the numbers,
*	from 0 to 14, followed by a new line.
*
*/
void more_numbers(void)
{
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 15; k++)
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
