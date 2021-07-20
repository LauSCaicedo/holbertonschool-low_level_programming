#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Function for measure the spaces.
 * @str: Pointer.
 * @n: integer.
 * Return: return size of a string.
 */

int _strlen(char *str, int n)
{
	if (!str)
		return (0);
	if (str[n] == '\0')
		return (n);
	return (_strlen(str, ++n));
}
/**
 * fill_in - Function for fill in dest from src.
 * @dest: Pointer of destiny.
 * @src: Pointer of source.
 * Return: Nothing.
 */
void fill_in(char *dest, char *src)
{
	int index = 0;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
}
/**
 * new_dog - Function for create a new dog.
 * @name: Char with name of dog.
 * @age: Int age of dog.
 * @owner: Char with name of owner of dog.
 * Return: A pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog = NULL;

	ptr_dog = malloc(sizeof(dog_t));
	if (!ptr_dog)
		return (NULL);

	ptr_dog->name = malloc(sizeof(char) * _strlen(name, 0));
	if (!ptr_dog->name)
		return (NULL);

	ptr_dog->owner = malloc(sizeof(char) * _strlen(owner, 0));
	if (!ptr_dog->owner)
		return (NULL);

	fill_in(ptr_dog->name, name);
	fill_in(ptr_dog->owner, owner);
	ptr_dog->age = age;

	return (ptr_dog);
}
