#include "main.h"

/**
*_strncat - concatenates two strings
*@n: number of bytes
*@dest: string
*@src: string
*
*Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, dest_len = 0;

	while (dest[length++])
		dest_len++;

	for (length = 0; src[length] && length < n; length++)
		dest[dest_len++] = src[length];

	return (dest);
}
