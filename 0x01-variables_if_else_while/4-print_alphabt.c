#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *        Print all the letters except q and e
 *
 * Return: Always 0.
 */
int main (void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
}
