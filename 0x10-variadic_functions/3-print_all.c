#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*p_character - prints the charcters
*@c: character to be printed
*/
void p_character(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
*p_integer - prints the integer
*@i: integer to be printed
*/
void p_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
*p_float - prints float values
*@f: float to be printed
*/
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
*p_string - prints the string
*@s: string to be printed
*/
void p_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}
/**
*print_all - prints all the arguments passed
*@format: a list of the type of arguments passed
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, k = 0;
	char *separator;
	va_list aps;
	v_types types[] = {
		{"c", p_character},
		{"i", p_integer},
		{"f", p_float},
		{"s", p_string},
	};

	separator = "";
	va_start(aps, format);
	while (format && format[i])
	{
		k = 0;
		while (k < 4)
		{
			if (format[i] == *types[k].valid)
			{
				printf("%s", separator);
				types[k].f(aps);
				separator = ", ";
			}
			k++;
		}
		i++;
	}
	printf("\n");
}
