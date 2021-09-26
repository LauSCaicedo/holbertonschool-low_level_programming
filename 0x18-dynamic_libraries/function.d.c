#include "main.h"

/**
 * *_memcpy - This function is for functions copy.
 * @dest: Direction in the memory area for copy.
 * @src: Direction in the memory area of destiny.
 * @n: Number of positions.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a, b;

	b = 0;
	for (a = 0; a < n; a++)
	{
		dest[b] = src[a];
		b++;
	}
	return (dest);
}

/**
 * *_strchr - Function for localizacted a character.
 * @s: Pointer with the place of work.
 * @c: variable for caracter.
 * Return: s or 0.
 */

char *_strchr(char *s, char c)
{
	int a, x;

	for (a = 0; s[a] != '\0'; a++)
	{
		a++;
	}
	for (x = 0; x <= a; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (0);
}

/**
 * _strspn - Function for count byte numbers.
 * @s: Pointer one.
 * @accept: Pointer two.
 * Return: cont.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, z, cont = 0;

	for (x = 0; s[x] != 32; x++)
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
