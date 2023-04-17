#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s",
			d->name ? d->name : "(nil)",
			d->age,
			d->owner ? d->owner : "(nil)");
	}
}
