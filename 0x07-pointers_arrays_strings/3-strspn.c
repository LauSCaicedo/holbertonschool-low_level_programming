#include "holberton.h"

/**
 * _strspn - Function for count byte numbers.
 * @s: Pointer one.
 * @accept: Pointer two.
 * Return: cont.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, z, cont = 0;

	for (x = 0; s[x] != ','; x++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
			{
				cont++;
			}
		}
	}
	return (cont);
}
