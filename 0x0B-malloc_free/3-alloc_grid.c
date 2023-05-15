#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mar;
	int x, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	mar = malloc(sizeof(int *) * height);

	if (mar == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mar[x] = malloc(sizeof(int) * width);

		if (mar[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mar[x]);

			free(mar);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
			mar[x][z] = 0;
	}

	return (mar);
}
