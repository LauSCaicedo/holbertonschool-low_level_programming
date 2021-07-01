#include "holberton.h"

/**
 * print_rev - This function is for print strings in reverse.
 * @s: String for change.
 * Return: Always 0.
 */

void print_rev(char *s)
{
int a, cont;
cont = 0;
for (a = 0; s[a] != '\0'; a++)
{
cont++;
}
for (a = cont; a >= '\0'; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
