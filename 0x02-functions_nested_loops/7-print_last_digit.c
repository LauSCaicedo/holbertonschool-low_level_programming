#include "holberton.h"

/**
 * print_last_digit - Function that returns the value of the last digit.
 * @n: Random number
 * Return: 0.
 */

int print_last_digit(int n)
{
	int op, lsd;

	lsd = n % 10;

	if (n > 0)
	{
		_putchar(lsd + 48);
		return (lsd);
	}
	else
	{
		op = lsd * -1;
		_putchar(op + 48);
		return (op);
	}
	return (0);
}
