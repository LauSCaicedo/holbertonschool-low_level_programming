#include "holberton.h"

/**
 * _pow_recursion - Function for return power of number.
 * @x: Random number.
 * @y: Exponent.
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
