#include <stdio.h>

/**
*main - print the sum of the even-valued terms, followed by a new line.
*	in the fibonacci series
*
*Return: always(0)
*/
int main(void)
{
	unsigned long j = 1;
	unsigned long fib;
	unsigned long k =  2;
	unsigned long sum = 3;

	while (fib <= 4000000)
	{
		fib = (j + k);
		printf("%lu", fib);
		j = k;
		k = fib;
		if (fib % 2 == 0)
		{
			sum = (sum + fib);
			printf("%lu", sum);
		}
	}
return (0);
}
