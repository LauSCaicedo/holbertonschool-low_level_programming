#include "variadic_functions.h"
#define NULL ((void *)0)

/**
 * print_numbers - Function that prints numbers.
 * @separator: Pointer to char.
 * @n: Arguments number.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int numbers = 0;
	unsigned int x = 0;
	va_list acumulator;

	va_start(acumulator, n);
	for (; x < n; x++)
	{
		numbers = va_arg(acumulator, int);
		printf("%d", numbers);
		if ((x < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(acumulator);
	printf("\n");
}
