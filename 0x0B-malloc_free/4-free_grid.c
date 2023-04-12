#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees a 2 dimensional grid
*@height: height of the grid
*@**grid: grid array
*
*Return: returns nothing
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
