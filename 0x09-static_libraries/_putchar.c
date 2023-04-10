#include <unistd.h>

/**
 * _putchar - prints c
 * @c: The character
 *
 * Return: On success 1.
 * On error, returns -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
