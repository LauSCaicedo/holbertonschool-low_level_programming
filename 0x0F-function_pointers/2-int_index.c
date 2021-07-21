#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - function that searches for an integer.
 * @array: String of the integers.
 * @size: Size of the string.
 * @cmp: Pointer to functions.
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size != 0 && cmp != NULL)
	{
		int x = 0, z;

		for (; x < size; x++)
		{
			z = cmp(array[x]);
			if (z == 1)
			{
				return (x);
			}
		}
		if (z == 0)
		{
			return (-1);
		}
	}
	return (-1);
}
