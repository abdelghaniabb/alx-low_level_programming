#include <stdlib.h>
/**
 * free_grid - check code
 * @grid: pointer
 * @height: demention
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
