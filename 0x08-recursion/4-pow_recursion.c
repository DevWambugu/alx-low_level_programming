#include "main.h"

/**
*_pow_recursion - returns the value of x raised to y
*@x: base value
*@y: power
*
*Return: return the value of x^y
*/
int _pow_recursion(int x, int y)
{
	int rst = x;

	if (y > 0)
	{
		rst *= _pow_recursion(x, y - 1);
	}
	else if (y == 0)
	{
		rst = 1;
	}
	else
	{
		rst = -1;
	}
	return (rst);
}
