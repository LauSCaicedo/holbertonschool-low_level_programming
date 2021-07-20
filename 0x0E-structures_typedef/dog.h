#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Structure to define the data of a dog.
 * @name: Name a dog.
 * @age: Age a dog.
 * @owner: owner of a dog.
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
