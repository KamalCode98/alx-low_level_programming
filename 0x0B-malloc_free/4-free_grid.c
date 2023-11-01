#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the memory allocated for a 2D grid
 *
 * @grid: The pointer to the 2D grid
 * @height: Height of the grid
 *
 * Description: This function releases the memory previously allocated
 * for a 2D grid using the alloc_grid function.
 * It ensure there are no memory leaks.
 *
 * Return: Pointer to the 2D grif if successful, or NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
