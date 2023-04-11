#include <stdlib.h>
#include "main.h"

/**
*str_concat - concatenates 2 strings
*@s1: string 1
*@s2: string 2
*
*Return:a pointer to a newly allocated space in memory
*	which contains the contents of s1,
*	followed by the contents of s2, and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *new_string;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";
	for (i = 0; s2[i]; i++)
	{
		j++;
	}
	for (i = 0; s1[i]; i++)
	{
		k++;
	}
	new_string = malloc(sizeof(char) * (k + j + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k]; k++)
	{
		new_string[l++] = s1[k];
	}
	for (j = 0; s2[j]; j++)
	{
		new_string[l++] = s2[j];
	}
	return (new_string);
}
