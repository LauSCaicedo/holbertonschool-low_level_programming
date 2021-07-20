#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function for print the structure dog.
 * @d: Variable of the structure.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
