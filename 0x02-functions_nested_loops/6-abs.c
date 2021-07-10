#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	int op;
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		op = n * -1;
		return (op);
	}
	return (0);
}
