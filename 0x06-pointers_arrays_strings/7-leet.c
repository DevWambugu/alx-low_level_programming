#include "main.h"

/**
**leet - encodes a string into 1337
*@s: string
*
*Return: a pointer to the encoded string
*/
char *leet(char *s)
{
	int length1 = 0;
	int length2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[length1])
	{
		for (length2 = 0; length2 <= 7; length2++)
		{
			if (s[length1] == leet[length2] ||
			    s[length1] - 32 == leet[length2])
				s[length1] = length2 + '0';
		}

		length1++;
	}

	return (s);
}
