#include "holberton.h"

/**
 * print_alphabet - function that print alphabet in lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
int alp = 97;
for (alp = 97; alp <= 122; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
