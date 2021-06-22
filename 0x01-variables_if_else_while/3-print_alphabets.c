#include <stdio.h>

/**
* main - Print Alphabet
*
*  Return: Always 0 (Success)
*/

int main(void)
{
int letter = 97;
int letterA = 65;
while (letter <= 122)
{
putchar(letter);
letter++;
}
while (letterA <= 90)
{
putchar(letterA);
letterA++;
}
putchar('\n');
return (0);
}
