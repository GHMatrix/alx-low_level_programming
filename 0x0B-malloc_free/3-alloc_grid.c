#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Program returns a pointer to a 2 dimensional array of int
 * @width: required width
 * @height: required height
 * Return: a pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **ben;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ben = malloc(sizeof(int *) * height);

	if (ben == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ben[a] = malloc(sizeof(int) * width);

		if (ben[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ben[a]);

			free(ben);

			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ben[a][b] = 0;
	}

	return (ben);
}
