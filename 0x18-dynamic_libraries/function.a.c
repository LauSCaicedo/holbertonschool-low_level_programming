#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _islower - Function for search a lowercase.
 * @c: character.
 * Return: Always 0.
 */

int _islower(int c)
{
    if (c > 97 && c < 122)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/**
 * _isalpha - Function for checks for alphabetic character.
 * @c: Characters.
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (1);
    }
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    return (0);
}

/**
 * _abs - Function for computes the absolute value of an integer.
 * @n: Random number.
 * Return: Always 0.
 */

int _abs(int n)
{
    int op;

    if (n > 0)
    {
        return (n);
    }
    else if (n < 0)
    {
        op = n * -1;
        return (op);
    }
    return (0);
}

int _isupper(int c)
{
    (void)c;
}
