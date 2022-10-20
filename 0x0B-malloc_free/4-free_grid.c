#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a program that frees a two dimensional array
 * @grid: first pram the two dimensional array
 * @height: second param the columns of the array
 *
 * Return: return nothing
 */
void free_grid(int **grid, int height)
{
	int i;/*loopingly go through the array and free it.*/

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
