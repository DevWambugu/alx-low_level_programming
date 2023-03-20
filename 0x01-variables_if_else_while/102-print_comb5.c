#include <stdio.h>

/**
*main - prints all possible combinations of two two-digit numbers.
*
*Return: Always return 0
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 9; k++)
		{
			for (l = 0; l < 10; l++)
			{
				for (i = 1; i < 10; i++)
				{
				putchar(j + '0');
				putchar(k + '0');
				putchar(' ');
				putchar(l + '0');
				putchar(i + '0');

				if (j != 9 || k != 8 || l != 9 || i != 9)
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	return (0);
}

