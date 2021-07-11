#include "holberton.h"

/**
 * *_strstr - Function for locates a substring.
 * @haystack: Pointer one.
 * @needle: Pointer two.
 * Return: Needle or 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, z;
	
	if (needle == 0)
	{
		return (haystack);
	}
	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (z = 0; needle[z] != '\0'; z++)
		{
			if (haystack[x] == needle[z])
			{
				return (needle);
			}
		}
	}
	return (0);
}
