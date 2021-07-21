#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator -  function that executes a function
 * given as a parameter on each element of an array.
 * @a: String of integer.
 * @sz: Size if string.
 * @act: Pointer to function.
 * Return: Nothing.
 */

void array_iterator(int *a, size_t sz, void (*act)(int))
{
	if (act != NULL && a != NULL && sz != 0)
	{
		size_t x = 0;

		for (; x < sz; x++)
		{
			act(a[x]);
		}
	}
}
