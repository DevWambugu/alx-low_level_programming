#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums the sum of the given argumentys
*@n: constant integer
*@...: number of arguments
*Return: returns 0 or sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
}
