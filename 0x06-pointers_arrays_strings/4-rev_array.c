#include "holberton.h"

/**
 * reverse_array - Function for reverse an Array.
 * @a: pointer of the place.
 * @n: lent at string.
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
int z, temp;
int x = n - 1;
for (z = 0; z < x; z++)
{
temp = a[z];
a[z] = a[x];
a[x] = temp;
x--;
}
}
