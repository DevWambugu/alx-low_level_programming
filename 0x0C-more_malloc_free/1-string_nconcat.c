#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - concatenates 2 strings
*@s1: first string
*@s2: second string
*@n: integer
*
*Return: a pointer to a new allocated memory block
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int l = 0;
	unsigned int i = 0;
	int j = 0;
	int length2 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (length2 = 0; s1[length2]; length2++)
	{
		len2++;
	}

	new_string = malloc((i * sizeof(int)) + (len2 * sizeof(int)) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (l = 0; s1[l]; l++)
	{
		new_string[j++] = s1[l];
	}
	for (i = 0; s2[i] && i <= n; i++)
	{
		new_string[j++] = s2[i];
	}
	new_string[j] = '\0';
	return (new_string);
}
