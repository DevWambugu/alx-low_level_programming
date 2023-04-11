#include "main.h"
#include <stdlib.h>

/**
*_strdup -  returns a pointer to a newly allocated space in memory,
*	which contains a copy of the string given as a parameter.
*@str: string
*
*Return:  returns a pointer to a newly allocated space in memory,
*	Returns NULL if str = NULL, NULL if insufficient memory
*	was available
*/
char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	new_string = malloc(sizeof(char) * (length + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		new_string[i] = str[i];
	}
	new_string[length] = '\0';
	return (new_string);
}
