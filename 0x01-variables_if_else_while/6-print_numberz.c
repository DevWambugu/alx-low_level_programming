#include <stdio.h>

/**
*main - print all single digit numbers of base 10 starting from 0
*	use putchar
*
*Return: Always 0.
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');

	return (0);
}
