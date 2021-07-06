#include "holberton.h"

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
