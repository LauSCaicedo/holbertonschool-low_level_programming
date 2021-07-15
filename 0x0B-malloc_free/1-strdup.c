#include "holberton.h"
#include "stdlib.h"

/**
 * _strdup - Function that returns a pointer to a
 *  newly allocated space in memory.
 * @str: Main pointer.
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	unsigned int x = 0;
	char *newString;
	unsigned int y = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[x] != '\0'; x++)
	{}
	newString = malloc((sizeof(char) * x) + 1);
		if (newString == NULL)
		{
			return (NULL);
		}
	for (; y < x; y++)
	{
		newString[y] = str[y];
	}
	return (newString);
}
