#include "holberton.h"

/**
 * *_strchr - Function for localizacted a character.
 * @s: Pointer with the place of work.
 * @c: variable for caracter.
 * Return: s or 0.
 */

char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == c)
{
return (s + a);
}
}
return (0);
}
