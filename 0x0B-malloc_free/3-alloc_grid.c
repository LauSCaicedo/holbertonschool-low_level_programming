#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function for fill an array dimensional.
 * @width: Columns.
 * @height: Files.
 * Return: A double pointer.
 */

int **alloc_grid(int width, int height)
{
	int f, c;
	int **twoS = NULL;

	twoS = malloc(sizeof(int *) * height);
	if (!twoS)
	{
		return (NULL);
	}
	for (f = 0; f < height; f++)
	{
		twoS[f] = malloc(sizeof(int) * width);
		if (twoS[f] == NULL)
		{
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			twoS[f][c] = 0;
		}
	}
	return (twoS);
}
