#include "holberton.h"

/**
 * _strcmp - Function for compare two strings.
 * @s1: String one.
 * @s2: Strin two.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x, z, cont;

	for (x = 0; s1[x] != 0; x++)
	{
		for (z = 0; s2[z] != 0; z++)
		{
			if (s1[x] != s2[z])
			{
				cont = s1[x] - s2[z];
				return (cont);
			}
			else
			{
				return (0);
			}
		}
	}
	return (0);
}
