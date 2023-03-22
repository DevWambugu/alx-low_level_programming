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
	unsigned long j = 1;
	unsigned long k = 2;
	unsigned long i;

	printf("%lu, %lu, ", j, k);

	for (i = 1; i < 49; i++)
	{
		fib = (j + k);
		printf("%lu", fib);
		j = k;
		k = fib;
		if (i < 48)
			printf(", ");
	}
	printf("\n");
return (0);
}
