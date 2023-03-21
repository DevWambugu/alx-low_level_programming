#include "main.h"

/**
*times_table - prints the 9 times table, starting with 0
*
*Return: Always 0
*/
void times_table(void)
{
	int number, multiple, prod;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			prod = number * multiple;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
