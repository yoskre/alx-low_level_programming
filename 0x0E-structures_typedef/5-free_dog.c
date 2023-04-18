#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free the doggo!
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
