#include "holberton.h"

/**
 * *leet - Function that replace letters.
 * @str: Text.
 * Return: str.
 */

char *leet(char *str)
{
int a, b;
char letters[10] = {'a', 'A', 'e', 'E',
'o', 'O', 't', 'T', 'l', 'L'};
char numbers[10] = {'4', '4', '3', '3',
'0', '0', '7', '7', '1', '1'};

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (str[a] == letters[b])
{
str[a] = numbers[b];
}
}
}
return (str);
}
