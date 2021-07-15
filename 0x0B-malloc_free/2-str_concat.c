#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: String one.
 * @s2: String two.
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int z = 0;
	int po, r, s;
	char *twos;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 != NULL)
	{
		return (NULL);
	}

	x = strlen(s1);
	z = strlen(s2);
	po = x + z;

	twos = malloc((sizeof(char) * po) + 1);
	for (r = 0; r < x; r++)
	{
		twos[r] = s1[r];
	}
	for (s = 0; s < z; s++)
	{
		twos[r] = s2[s];
		r++;
	}
	twos[r] = '\0';
	return (twos);
}
