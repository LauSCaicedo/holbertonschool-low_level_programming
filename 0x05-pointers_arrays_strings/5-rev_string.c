#include "holberton.h"

/**
 * rev_string - Function for reverse a string.
 * @s: string that will be reverse.
 * Return: Always 0.
 */

void rev_string(char *s)
{
int a, cont, temp, b;
cont = 0;
for (a = 0; s[a] != 0; a++)
{
cont++;
}
cont--;
for (b = 0; b < cont; b++)
{
temp = s[b];
s[b] = s[cont];
s[cont] = temp;
cont--;
}
}
