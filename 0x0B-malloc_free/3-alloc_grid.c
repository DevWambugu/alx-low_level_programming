#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - returns a pointe rto a 2 dimensional array
*@width: integer
*@height: height integer
*
*Return: returns a pointer to a 2 dimensional array of integers
*	or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}

