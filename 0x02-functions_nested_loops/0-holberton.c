#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - _putchar
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
char paragraph[] = "Holberton";
size_t i = 0;
size_t arrayLength = strlen(paragraph);
for (i = 0; i < arrayLength; i++)
{
putchar(paragraph[i]);
}
putchar('\n');
return (0);
}
