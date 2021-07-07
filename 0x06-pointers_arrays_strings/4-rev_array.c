#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
  int z, temp;
  int x = n - 1;
  for (z = 0; a[z] < x; z++)
    {
      temp = a[z];
      a[z] = a[x];
      a[x] = temp;
      x--;
    }
}
