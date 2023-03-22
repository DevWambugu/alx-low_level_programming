#include <stdio.h>

/**
*main - print the sum of all the multiples of 3 or 5 below 1024,
*	followed by a new line.
*
*Return: Always return 0
*/
int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d", sum);
	printf("\n");
return (0);
}

