#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number
 *     to the variable n each time it is executed
 * 
 *success: Always return 0
 *
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = n % 10;
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5", n, a);
	else if (a < 6 && a != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
	else
		printf("Last digit of %d is %d and is 0", n, a);
	return (0);
}
