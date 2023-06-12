#include "main.h"
/**
 * free_grid - free grid
 * @grid: grid
 * @height: height
 * Return: Always 0 on success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
