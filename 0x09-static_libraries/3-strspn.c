#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: string
*@accept: prefix to be measured
*
*Return: Returns the number of bytes in the intial segement
*	of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == ('\0'))
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}