#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - So, we will print all the numbers until 98.
 * @n: Any interger.
 * Return: Nothing.
 */

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
