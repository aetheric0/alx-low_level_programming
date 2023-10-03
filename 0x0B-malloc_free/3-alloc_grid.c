#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of matrix
 * @height: height of matrix
 * Return: Returns pointer to matrix if successful, NULL on failure
 **/

int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width == 0 || height == 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
		if (matrix == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
		if (matrix[i] == NULL)
			for (j = 0; j < width; j++)
			{
				free(matrix[j]);
			}
		free(matrix);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}