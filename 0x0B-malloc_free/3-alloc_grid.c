#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_double_pointer - Function for free in a line.
 * @ptr: Double pointer.
 * @size: integer of size.
 * Return: Nothing
 */

void free_double_pointer(void **ptr, int size)
{
	while (size >= 0)
	{
		free(ptr[size]);
		size--;
	}
	free(ptr);
}

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

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		twoS = malloc(sizeof(int *) * height);
		if (!twoS)
		{
			return (NULL);
		}
		for (f = 0; f < height; f++)
		{
			twoS[f] = malloc(sizeof(int) * width);
			if (twoS[f] == 0)
			{
				free_double_pointer((void **)twoS, f);
				return (NULL);
			}
			for (c = 0; c < width; c++)
			{
				twoS[f][c] = 0;
			}
		}
		return (twoS);
	}
	return (NULL);
}
