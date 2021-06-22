#include <stdio.h>

/**
 * main - Print Alphabet
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
int num = 48;
int abc = 97;
while (num <= 57)
{
putchar(num);
num++;
}
while (abc <= 102)
{
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
