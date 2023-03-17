#include <stdio.h>

/**
*main - print all combinations of single numbers
*
*Return: Always return 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
