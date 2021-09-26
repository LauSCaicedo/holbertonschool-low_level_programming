#include "main.h"

/**
 * _isdigit - Function.
 * @c: Integer.
 * Return: Always 0.
 */

int _isdigit(int c)
{
	(void)c;
}

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

/**
 * _puts - Function.
 * @s: Pointer.
 * Return: Always 0.
 */

void _puts(char *s)
{
	(void)*s;
}

/**
 * _strcpy - Function.
 * @dest: Pointer1.
 * @src: Pointer2.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	(void)*dest;
	(void)*src;
}

/**
 * _atoi - Function.
 * @s: Pointer.
 * Return: Always 0.
 */

int _atoi(char *s)
{
	(void)*s;
}
