#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the struct dog
 * @d: struct variable
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->age == 0.0)
		d->name = "nil";
	if (d->owner == NULL)
		d->name = "nil";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
