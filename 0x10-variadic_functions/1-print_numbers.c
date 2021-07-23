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
	int ele_sedurmio = 0;
	unsigned int x = 0;
	va_list emanuel_Vayaseadormir;

	va_start(emanuel_Vayaseadormir, n);
	for (; x < n; x++)
	{
		ele_sedurmio = va_arg(emanuel_Vayaseadormir, int);
		if (separator != NULL)
		{
			printf("%d", ele_sedurmio);
		}
		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(emanuel_Vayaseadormir);
	printf("\n");
}
