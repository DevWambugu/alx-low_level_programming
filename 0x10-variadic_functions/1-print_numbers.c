#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - prints numbers followed by a new line
*@separator: string to be printed between numbers
*@n: number of integrs passed to the function
*
*Return: void function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (*separator)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(ap);
		printf("\n");
	}
}
