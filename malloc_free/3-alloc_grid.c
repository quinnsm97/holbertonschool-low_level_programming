#include "main.h"
#include <stdlib.h>

/**
  * **alloc_grid - returns a pointer to 2 dimensional array of ints
  * @width: width of array
  * @height: height of array
  *
  * Return: the pointer to the array or NULL
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h = 0;
	int w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (h < height)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			while (h != 0)
			{
				h--;
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
		h++;
	}
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
