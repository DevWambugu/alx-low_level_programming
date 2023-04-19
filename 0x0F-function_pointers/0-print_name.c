#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_name - prints a name
*@name: pointer to name
*@f: pointer to void function
*
*Return: This is a void function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
