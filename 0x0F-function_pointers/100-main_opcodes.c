#include <stdio.h>
#include <stdlib.h>

/**
*main - prints out the opcodes. number of opcodes
*	printed depends on the number of bytes specified
*@argc: argument count
*@argv: argument vector
*
*Return: Always return 1 or 2 or 0
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	char *strt = (char *)main;
	int i = 0;

	for (i = 0; i < no_of_bytes; i++)
	{
		printf("%02x", strt[i] & 0xFF);
		if (i != no_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
