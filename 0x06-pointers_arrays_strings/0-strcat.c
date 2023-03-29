#include "main.h"

/**
*_strcat - concatenates two strings
*@src: string 2
*@dest: string 1
*
*Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	/*array that stores length of dest*/
	int length = 0;
	int j = 0;
	*dest = dest[length];
	*src = src [j];

	while (dest[length] != '\0') 
	{
		dest++;
	}
	/*concatenate src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++length) 
	{
		dest[length] = src[j];
  	}
	/* terminating the s1 string*/
	dest[length] = '\0';
	return(0);
}
