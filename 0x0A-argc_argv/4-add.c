#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - prints out the sum of positive numbers
*@argc: argument count
*@argv: argument vector
*
*Return: always retun 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int j = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j])
			{
				if (isdigit(argv[i][j]))
				{
					j++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
