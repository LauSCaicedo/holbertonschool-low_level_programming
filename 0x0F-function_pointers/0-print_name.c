#include <stdio.h>
#include <stddef.h>

/**
 * print_name - Function that point to other pointer.
 * @name: Name of the person.
 * @f: Pointer to function.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
