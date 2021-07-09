#include "holberton.h"

/**
 * _puts_recursion - Function for print a string.
 * @s: Pointer whit string.
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
