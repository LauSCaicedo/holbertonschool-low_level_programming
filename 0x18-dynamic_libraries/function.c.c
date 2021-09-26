#include "main.h"

/**
 * *_strcat - Function for concatenates two strings.
 * @dest: String one.
 * @src:  String two.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b = 0;
	int cont = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		cont++;
	}
	for (b = 0; src[b] != '\0'; b++, cont++)
	{
		dest[cont] = src[b];
	}
	return (dest);
}

/**
 * *_strncat - Function for concatenates two strings.
 * @dest: String one.
 * @src:  String two.
 * @n: limiting.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b = 0;
	int cont = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		cont++;
	}
	for (b = 0; src[b] != '\0'; b++, cont++)
	{
		if (b < n)
		{
			dest[cont] = src[b];
		}
	}
	return (dest);
}

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

/**
 * *_memset - Function for fills the memory area.
 * @s: Pointer whit the direction
 * @b: Caracther for the spaces in memory.
 * @n: Number of memory spaces.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
