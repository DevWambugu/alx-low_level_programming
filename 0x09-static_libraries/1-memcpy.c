#include "main.h"

/**
*_memcpy - copies a memory area
*@dest: pointer to destination memory
*@src: pointer to source memory
*@n: bytes of memory to be copied
*
*Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ddest = (char *)dest;
	char *ssrc = (char *) src;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		ddest[i] = ssrc[i];
	}

	return (dest);
}
