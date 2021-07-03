#include "holberton.h"

/**
 * *_strcat - Function for concatenates two strings.
 * @dest: String one.
 * @src:  String two.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int a;
int b = 0;
int cont = 0;
for (a = 0; dest[a] != '\0'; a++)
{
cont++;
}
for (b = 0; src[b] != '\0'; b++, cont++)
{
dest[cont] = src[b];
}
return (dest);
}
