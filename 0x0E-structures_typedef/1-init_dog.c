#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type dog when called
 * @d: variable to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: Dog owner
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *a = d;

	a->name = name;
	a->age = age;
	a->owner = owner;
}
