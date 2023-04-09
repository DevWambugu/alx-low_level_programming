#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplies 2 numbers
*@argc: argument count
*@argv: argument vector
*
*Return: always return 0
*/
int main(int argc, char *argv[])
{
	int result;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc == 3)
	{
		result = (x * y);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
