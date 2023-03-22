#include <stdio.h>

/**
*main -  print the first 50 Fibonacci numbers,
*	starting with 1 and 2, followed by a new line.
*
*Return: Always 0
*/
int main(void)
{
	unsigned long fib;
	int j = 1;
	int k = 2;
	int i;

	printf("%d, %d", j, k);

	for (i = 3; i < 51; i++)
	{
		fib = (j + k);
		k = j;
		j = fib;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
return (0);
}
