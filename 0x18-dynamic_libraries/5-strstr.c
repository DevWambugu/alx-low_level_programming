#include "main.h"

/**
*_strstr - locates a substring
*@haystack:string
*@needle: substring
*
*Return: return pointer to the beginning of substring
*/
char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[j] == needle[j])
		{
			while (1)
			{
				if (needle[j + 1] == ('\0'))
					return (haystack);
				j++;
			}
		}
		haystack++;
	}
	return ('\0');
}
