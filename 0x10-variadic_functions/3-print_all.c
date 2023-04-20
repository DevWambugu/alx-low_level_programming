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
	unsigned int j;
	char c;
	float f;
	int i = 0;
	char *s = "";
	va_list (ap);

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
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
				j = va_arg(ap, unsigned int);
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
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
