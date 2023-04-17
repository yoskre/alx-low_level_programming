#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize dog struct
 * @d: dog struct
 * @name: @d's name
 * @age: @d's age
 * @owner: @d's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
