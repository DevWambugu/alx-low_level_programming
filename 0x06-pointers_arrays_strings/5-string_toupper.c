#include "main.h"

/**
*string_toupper - converts lower case characters to uppercase
*@char *: pointer to a character
*@str: string to be changed
*
*Return: str
*/
char *string_toupper(char *)
{
	int length = 0;

	while (str[length])
	{
		if (str[length] >= 'a' && str[length] <= 'z')
			str[length] -= 32;

		length++;
	}

	return (str);
