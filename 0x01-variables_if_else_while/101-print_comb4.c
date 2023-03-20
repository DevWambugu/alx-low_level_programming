#include <stdio.h>

/**
*main - print all possible different combinations of three digits
*
*Return: Always return o
*/
int main(void)
{
	int k;
	int j;
	int l;

	for (j = 0; j < 8; j++)
	{

		for (k = j + 1; k < 9; k++)
		{
			for (l = k + 1; l < 10; l++)
			{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (j != 7 || k != 8 || l != 9)
			putchar(',');
			putchar(' ');
			}
		}
	}

	return (0);
}
