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
	int n;

	if (*s != '\0')
	{
		n = is_palindrome(s + 1);
		if (*s == n)
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
