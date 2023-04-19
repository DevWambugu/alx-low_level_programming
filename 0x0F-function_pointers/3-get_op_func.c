#include "3-calc.h"

/**
*get_op_func - selects the correct function
*@s: the operator passed to the function
*
*Returns  pointer to the function to perform the operation
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
			i++;
		}
	}
	return (NULL);
}
