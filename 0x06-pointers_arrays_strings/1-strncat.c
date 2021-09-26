#include "holberton.h"

/**
 * *_strncat - Function for concatenates two strings.
 * @dest: String one.
 * @src:  String two.
 * @n: limiting.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
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
        if (b < n)
        {
            dest[cont] = src[b];
        }
    }
    return (dest);
}

/**
 * *_strncat - Function for concatenates two strings.
 * @dest: String one.
 * @src:  String two.
 * @n: limiting.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
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
        if (b < n)
        {
            dest[cont] = src[b];
        }
    }
    return (dest);
}
