#include "holberton.h"

/**
 * create_array - Function creates an array.
 * @size: Array size.
 * @c: Character.
 * Return: A pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *newArray;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	newArray = malloc(sizeof(char) * size);
	if (newArray == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		newArray[x] = c;
	}
	return (newArray);
}
