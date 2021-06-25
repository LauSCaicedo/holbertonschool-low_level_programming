#include "holberton.h"

/**
 * print_alphabet_x10 - This function help me print the alphabet ten times.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
int i, alp;
for (i = 0; i <= 9; i++)
{
for (alp = 97; alp <= 122; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
