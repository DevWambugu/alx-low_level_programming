#include "3-calc.h"

/**
*op_add - adds to integers
*@a: integer a
*@b: integer b
*
*Return: return sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - subtracts b from a
*@a: integer a
*@b: integer b
*
*Return: returns the difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - multiplies a and b
*@a: integer a
*@b: integer b
*
*Return: returns the product
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - returns the division
*@a: integer a
*@b: integer b
*
*Return: returns the division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - gets te remainder
*@a: integer a
*@b: integer b
*
*Return: returns the remainder of the division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
