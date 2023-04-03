#include "main.h"
#include <stddef.h>

/**
*_strchr - locates a character in a string
*@s: string
*@c: character to be checked
*
*Return: a pointer to the first occurrrence of chaacter c
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == ('\0'))
	{
		return ((char *)s);
	}
	return (NULL);
}
