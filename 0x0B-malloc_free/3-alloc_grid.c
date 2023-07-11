#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to make use of nested loop to make grid
 *
 * @width: input for the width
 *
 * @height: input for the height
 *
 * Return: the 2 diam pointer
 */
int **alloc_grid(int width, int height)
{
	int **dom;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	dom = malloc(sizeof(int *) * height);

	if (dom == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		dom[a] = malloc(sizeof(int) * width);

		if (dom[a] == NULL)
		{
			for (; a >= 0; a--)
				free(dom[a]);

			free(dom);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			dom[a][b] = 0;
	}

	return (dom);
}
