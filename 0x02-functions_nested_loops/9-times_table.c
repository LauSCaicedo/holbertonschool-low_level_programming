#include "holberton.h"

/**
 * times_table - this function it will print the multiplication tables for us.
 *
 * Return: Nothing.
 */

void times_table(void)

{
int valor1, valor2, total;
for (valor1 = 0; valor1 <= 9; valor1++)
{
for (valor2 = 0; valor2 <= 9; valor2++)
{
total = valor1 * valor2;
if (valor2 <= 0)
{
_putchar(total + 48);
}
else if (total <= 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(total + 48);
}
else if (total > 9)
{
_putchar(44);
_putchar(32);
_putchar(total / 10 + 48);
_putchar(total % 10 + 48);
}
}
_putchar('\n');
}
}
