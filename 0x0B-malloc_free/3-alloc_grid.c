#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: columns.
 * @height: rows.
 *
 * Return: allocated grid.
 */
int **alloc_grid(int width, int height)
{
	int  **grid;/*two dimensional array*/
	int i, j;/* for transversing the loop*/

	if (width <= 0 || height <= 0)
	{
		return (NULL);/*if 0 is passed to b both*/
	}
	grid = malloc(height * sizeof(int *));/*inistiates the horisontal axis*/
	if (grid == NULL)/*Base case a must in initialising with malloc*/
	{
		free(grid);
		return (NULL);/*The function should return NULL on failure*/
	}
	for (i = 0; i < height; i++)/*loop to run the elements in the arrays height*/
	{
		agrid[i] = malloc(width * sizeof(int));/*initialise the arrays*/
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);/*if malloc fails at any point go back and free the aloc*/
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0;  j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
