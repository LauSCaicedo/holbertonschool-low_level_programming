#include "holberton.h"

/**
 * swap_int - let's exchange values.
 * @a: value 1
 * @b: value 2
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
