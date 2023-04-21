#include <stdio.h>
#include <stdlib.h>

/**
*print_opcodes - prints out opcodes.number printed
*	depends on the number of bytes specified
*@strt: start of main function optcodes
*@length: number of optcodes
*
*Return: returns nothing. This nis a void function
*/
void print_opcodes(unsigned char *strt, int length);
/**
*main - prints out the opcodes. number of opcodes
*	printed depends on the number of bytes specified
*@argc: argument count
*@argv: argument vector
*
*Return: Always return 1 or 2
*/
int main(int argc, char **argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int no_of_bytes = atoi((const char)*argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *strt = (unsigned char)*main;

	print_opcodes(strt, no_of_bytes);
	return (0);
}
/**
*print_opcodes - prints the opcodes
*@strt: start of the opcodes
*@length: number of opcodes to be printed
*
*Return: return nothing
*/
void print_opcodes(unsigned char *strt, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		printf("%02x", *(strt + i));
	}
	printf("\n");
}
