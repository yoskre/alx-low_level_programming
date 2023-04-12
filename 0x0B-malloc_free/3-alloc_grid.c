#include <stdlib.h>

/**
 * alloc_grid - pointer to an array of @width and @height
 * @width: integr
 * @height: integer
 *
 * Return: p
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(*p));
	if (!p)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(**p));
		if (!p[i])
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
