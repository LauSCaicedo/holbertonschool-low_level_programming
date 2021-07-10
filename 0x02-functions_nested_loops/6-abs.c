#include "holberton.h"

/**
 * _abs - Function for computes the absolute value of an integer.
 * @n: Random number.
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
