#include "holberton.h"

/**
 * *_strncpy - Copy from src to dest.
 * @dest: Destiny pointer.
 * @src: Source pointer.
 * @n: Limit.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x, z;

	for (x = 0; src[x] != '\0'; x++)
	{
	}
		for (z = 0; z < n; z++)
		{
			if (z < x)
			{
				dest[z] = src[z];
			}
			else
			{
				dest[z] = '\0';
			}
		}
	return (dest);
}
