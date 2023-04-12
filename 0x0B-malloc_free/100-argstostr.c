#include "main.h"
#include <stdlib.h>

/**
*argstostr - concatenates all arguments of te program
*@ac:number of arguments
*@av: argument vector
*
*Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i = 0;
	int j = 0;
	int k = 0;
	int count = ac;

	if  (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
	}
	new_string = malloc(sizeof(char) * (count + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_string[k++] = av[i][j];
		}
		new_string[k++] = '\n';
	}
	new_string[count] = '\0';
	return (new_string);
}
