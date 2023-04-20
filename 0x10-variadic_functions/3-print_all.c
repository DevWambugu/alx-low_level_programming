#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_all - the function prints anything
*@format: a list of the arguments passed to the function
*@...: list of arguments to be printed
*
*Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	int j = 0;
	char c;
	float f;
	char *s;
	va_list (ap);

	va_start(ap, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 'j':
				j = va_arg(ap, int);
				printf("%d", j);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;
		}
		if (format[j + 1])
		{
			printf(", ");
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
