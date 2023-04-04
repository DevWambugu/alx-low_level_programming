#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals
*	of a square matrix of integers
*@a: pointer
*@size: size of the square matrix
*
*/
void print_diagsums(int *a, int size)
{
	int j = 0;
	int sumtotal1 = 0;
	int sumtotal2 = 0;

	for (j = 0; j < size; j++)
	{
		sumtotal1 += a[j];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		sumtotal2 += a[j];
		a -= size;
	}
	printf("%d, %d\n", sumtotal1, sumtotal2);
}
