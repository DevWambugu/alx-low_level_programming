#include "main.h"

/**
*_sqrt_recursion -  returns the natural square root of a number
*@n: integer
*
*Return: returns the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	double E = (n / 2);
	int SE;
	int rtn;
	int N = n;

	if (n < 0)
	{
		rtn = -1;
	}
	else if (n == 1)
	{
		rtn = 1;
	}
	else if (n == 0)
	{
		rtn = 0;
	}
	else
	{
		SE = (E + (N / E)) / 2;
		 _sqrt_recursion(SE);
		E = SE;
		N = n;
		if ((SE - E) <= 0.001)
		{
			rtn = SE;
		}
	}
	return (rtn);
}
