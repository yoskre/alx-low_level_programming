#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!(d->name))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
