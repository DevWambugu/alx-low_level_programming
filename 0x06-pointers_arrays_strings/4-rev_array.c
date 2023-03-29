#include "main.h"

/**
*reverse_array - reverses the contents of an array of integers
*@n: number of integers in the array
*@a: array of integers
*
*Return: reversed array
*/
void reverse_array(int *a, int n)
{
	int tmp, length;

	for (length = n - 1; length >= n / 2; length--)
	{
		tmp = a[n - 1 - length];
		a[n - 1 - length] = a[length];
		a[length] = tmp;
	}
}
