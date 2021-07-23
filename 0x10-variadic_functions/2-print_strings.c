#include "variadic_functions.h"
#define NULL ((void *)0)

/**
 * print_strings - Function that prints strings.
 * @separator: Pointer to the string
 * to be printed between the strings.
 * @n: Arguments number.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	char *str = 0;
	va_list strings;

	va_start(strings, n);
	for (; x < n; x++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if ((x < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
