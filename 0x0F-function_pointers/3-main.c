#include "3-calc.h"

/**
*main - returns an integer valuebased on operator
*
*Return: an integer value
*/
int main(int argc, char **argv)
{
	int num1, num2, result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 && strcmp(argv[2], "%") != 0
		&& strcmp(argv[2], "*")!=0 && strcmp(argv[2], "/") != 0) 
	{
		printf("Error\n");
		exit(99);
	}
	get_op_func(argv[2]);
	result = function(num1, num2);
	return (result);
}