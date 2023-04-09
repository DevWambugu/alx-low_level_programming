#include <stdio.h>

/**
*main - print the number of arguments passed
*@argc: argument count
*@argv: argument vector
*
*Return:always return 0
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
