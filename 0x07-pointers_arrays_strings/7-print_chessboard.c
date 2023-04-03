#include "main.h"

/**
*print_chessboard - prints a chess board
*
*Return: Returns 0
*/
void print_chessboard(char (*a)[8])
{
	int j = 0;
	int i = 0;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
