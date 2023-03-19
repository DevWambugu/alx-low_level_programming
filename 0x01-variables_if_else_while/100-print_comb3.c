#include <stdio.h>

/**
*main - print all possible different combinations of two digits
*
*Return: Always 0
*/
int main(void)
{
	int k;
	int j;

	for (j = 0; j < 9; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
		putchar(j + '0');
		putchar(k + '0');
			if (j != 8 || k != 9)
				putchar(',');
				putchar(' ');
		}
	}
	return (0);
}
