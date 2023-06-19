#include "main.h"

/**
*_memset - Fills memory with a constant byte
*@s: memory area
*@b: constant byte
*@n: bytes of the memory
*
*Return: returns a pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;

	while (n > 0)
	{
		*pointer++ = (char) b;
		n--;
	}
return (s);
}
