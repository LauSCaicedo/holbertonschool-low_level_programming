#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Function for init the information of the dog.
 * @d: Pointer of the function.
 * @name: Name of dog.
 * @age: Age of type float.
 * @owner: Owner of the dog.
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
