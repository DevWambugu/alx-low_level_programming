#include "main.h"

/**
*factorial - returns the factorial of a number
*@n: integer
*
*Return: Returns the factorial of a number
*/
int factorial(int n)
{
	int fact = 0;

	if (n > 0)
	{
		fact = (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		fact = 1;
	}
	else
	{
		fact = -1;
	}
	return (fact);
}
