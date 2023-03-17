#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 *        and then in uppercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
        char ch;
	char alpha;

        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
                putchar(alpha);

        putchar('\n');

        return (0);
}
