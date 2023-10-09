#include "dog.h"

/**
 * init_dog - initializes a variable of type dog when called
 * @d: variable to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: Dog owner
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
