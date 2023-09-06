#include "main.h"
/**
 * alloc_grid - arrays in two dimensional
 * @width: columns
 * @height: rows
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **display;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	display = malloc(sizeof(int *) * height);
	if (display == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		display[a] = malloc(sizeof(int) * width);
		if (display[a] == NULL)
		{
			free(display);
			for (b = 0; b <= height; b++)
				free(display[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			display[a][b] = 0;
	}
	return (display);
}
