#include <stdio.h>

/**
*main - print the numbers from 1 to 100, followed by a new line.
*For multiples of three print Fizz instead of the number
*for the multiples of five print Buzz.
*For numbers which are multiples of both three and five print FizzBuzz
*
*Return: Always return 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3) == 0 && (i % 15) != 0)
		printf("Fizz ");
	else if ((i % 5) == 0 && (i % 15) != 0)
		printf("Buzz ");
	else if ((i % 15) == 0)
		printf("Fizz Buzz ");
	else
	printf("%d ", i);
	}
	printf("\n");
	return (0);
}
