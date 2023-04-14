#include "main.h"

/**
*mul - multiplies 2 numbers
*@num1: the first number
*@num2:second number
*
*Return: void function
*/
void mul(int argc, char* argv[])
{
	long num1, long num2;

	if (argc != 3)
	{
		_putchar("Error\n");
		exit (98);
	}
