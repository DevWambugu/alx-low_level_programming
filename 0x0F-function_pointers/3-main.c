#include "3-calc.h"

/**
*main - returns an integer valuebased on operator
*@argc: argument count
*@argv: argument vector
*
*Return: an integer value
*/
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*f)(int, int);

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
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "%") != 0 && strcmp(argv[2], "*") != 0
		&& strcmp(argv[2], "/") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	f = get_op_func(argv[2]);
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
