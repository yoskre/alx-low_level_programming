#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new_dog struct
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: return new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
