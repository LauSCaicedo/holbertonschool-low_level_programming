#include "holberton.h"

/**
 * _puts - Whit this funcion we will show of the content of this string.
 * @str: Content of he string.
 * Return: Nothing.
 */

void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
