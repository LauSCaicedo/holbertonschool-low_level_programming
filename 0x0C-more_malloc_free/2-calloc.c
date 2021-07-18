#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - Function allocates memory for an array
 * @nmemb: elements
 * @size: size of elements
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocate;
	int a = 0;
	int cat = size * nmemb;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocate = malloc(cat);
	if (allocate == NULL)
	{
		return (NULL);
	}
	for (; a < cat; a++)
	{
		allocate[a] = 0;
	}
	return (allocate);
}
