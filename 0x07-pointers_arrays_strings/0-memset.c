#include "holberton.h"

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
