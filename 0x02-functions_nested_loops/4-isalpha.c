#include "main.h"

/**
*_isalpha - checkes if the character is an alphabet
*@c: is the character to be checked
*
*Return: 1 if c is upper or lower case and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
