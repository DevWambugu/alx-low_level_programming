#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_strings - prints strings followed by a new line
*@separator: string to be placed bewteen strings
*@n: number of strings passed to the function
*@...: strings
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(ap, const char *);

		if (separator == NULL)
		{
			printf("(nil");
		}
		else
		{
			printf("%s", str);
				if (separator != NULL && i < (n - 1))
				{
					printf("%s", separator);
				}
		}
		va_end(ap);
	}
	printf("\n");
}
