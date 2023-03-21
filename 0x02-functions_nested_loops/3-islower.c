#include "main.h"

/**
*_islower - Checks if a character is lowercase.
*
*Return: 0ne if c is lower and zero otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
