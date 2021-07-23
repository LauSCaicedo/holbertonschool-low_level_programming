#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns
 * the sum of all its parameters.
 * @n: Arguments numbers.
 * Return: 0 or pa.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int ps = 0;
		int pa = 0;
		unsigned int x = 0;
		va_list s;

		va_start(s, n);
		for (; x < n; x++)
		{
			ps = va_arg(s, int);
			pa += ps;
		}
		va_end(s);
		return (pa);
	}
}
