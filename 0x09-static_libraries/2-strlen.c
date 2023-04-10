#include "main.h"

/**
*_strlen - returns the length of a string
*@s: string
*
*Return: length of the screen
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
