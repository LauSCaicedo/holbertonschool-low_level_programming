#include "holberton.h"

/**
 * _strlen - Function that will help us measure the length of a chain.
 * @s: String for measure its length.
 * Return: Always 0.
 */

int _strlen(char *s)
{
int a;
for (a = 0; *s != '\0'; a++)
{
s++;
}
return (a);
}
