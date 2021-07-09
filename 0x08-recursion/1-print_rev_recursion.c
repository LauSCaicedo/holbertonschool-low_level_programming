#include "holberton.h"

/**
 * _print_rev_recursion - Function for print a reverse string.
 * @s: Pointer with the string.
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
