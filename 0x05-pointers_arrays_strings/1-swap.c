#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: integer to be swapped
*@b: intger to be swapped
*
*/
void swap_int(int *a, int *b)
{
	int temporary_holder = *a;
	*a = *b;
	*b = temporary_holder;
}
