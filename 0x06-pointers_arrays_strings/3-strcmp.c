#include "holberton.h"

/**
 * _strcmp - Function for compare two strings.
 * @s1: String one.
 * @s2: Strin two.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; *s1 && *s2 && *s1 == *s2; x++)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
