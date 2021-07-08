#include "holberton.h"

/**
 * *_strpbrk - With this function we searches
 *  a string for any of a set of bytes.
 * @s: Pointer with first string.
 * @accept:Pointer two with the second string.
 * Return: s[x] or 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
			{
				return (s + x);
			}
		}
	}
	return (0);
}

