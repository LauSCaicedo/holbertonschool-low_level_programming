#include <stdio.h>

/**
 * main - Print Alphabet
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
int n = 48;
int c = 44;
int esp = 32;
while (n <= 57)
{
putchar(n);
n++;
if (n != 58)
{
putchar(c);
putchar(esp);
}
}
putchar('\n');
return (0);
}
