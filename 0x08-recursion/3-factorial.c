#include "holberton.h"

/**
 * factorial - Function for return a factorial of a number.
 * @n: Random number.
 * Return: Always 0.
 */

int factorial(int n)
{
	int fck;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
	       fck = n * factorial(n - 1);
	}
	return (fck);
}
