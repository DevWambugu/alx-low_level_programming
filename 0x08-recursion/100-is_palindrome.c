#include "main.h"

/**
*is_palindrome - checks if a string is a palindrome
*@s: string to be checked
*
*Return: return 1 or 0
*/
int is_palindrome(char *s)
{
	int rtn;

	if (*s != '\0')
	{
		is_palindrome(s + 1);
		if (*s)
		{
			rtn = 1;
		}
		else
		{
			rtn = 0;
		}
	}
	else
	{
		rtn = 1;
	}
	return (rtn);
}
