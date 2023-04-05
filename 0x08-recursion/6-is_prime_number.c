#include "main.h"

/**
*is_prime_number - checks if the number is a prime number
*@n: an integer
*
*Return: Returns 1 or 0
*/
int is_prime_number(int n)
{
	int prime;

	if (n == 2)
	{
		prime = 1;
	}
	else if ((n % 2) == 0)
	{
		prime = 0;
	}
	else if (n <= 1)
	{
		prime = 0;
	}
	else if ((n > 7) && (n % 3) == 0)
	{
		prime = 0;
	}
	else if ((n > 7) && (n % 5) == 0)
	{
		prime = 0;
	}
	else if ((n > 7) && (n % 7) == 0)
	{
		prime = 0;
	}
	else
	{
		prime = 1;
	}
	return (prime);
}
