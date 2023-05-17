#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function makes a grid using a nested loop
 * @width: input for the width
 * @height: input for the height
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mee[i] = malloc(sizeof(int) * width);

		if (mee[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mee[i]);

			free(mee);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mee[i][j] = 0;
	}

	return (mee);
}
