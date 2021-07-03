#include "holberton.h"

/**
 * *string_toupper - Function changes all lowercase letters to uppercase.
 * @str: string lowercase.
 * Return: str.
 */

char *string_toupper(char *str)
{
int a = 0;
if (str == 0)
return (0);
for (a = 0; str[a]; a++)
{
if (str[a] >= 'a' && str[a] <= 'z')
{
str[a] -= 32;
}
}
return (str);
}
