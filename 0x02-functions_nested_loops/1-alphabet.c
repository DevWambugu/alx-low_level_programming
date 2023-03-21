#include "main.h"

/**
*print_alphabet - prints the alphabet in lowercase, followed by a new line.
*
*Return: Always return 0
*/
void print_alphabet(void)
{
	char beta;

	for (beta = 'a'; beta <= 'z'; beta++)
		_putchar(beta);
	_putchar('\n');
}
