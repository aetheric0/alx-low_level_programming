#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog record
 * @name: name of dog
 * @age: age of dog
 * owner: owner of dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *creation;
	int i;

	creation = malloc(sizeof(dog_t));
	if (creation == NULL)
		exit(EXIT_FAILURE);
	creation->name = malloc(strlen(name) + 1);
	creation->owner = malloc(strlen(owner) + 1);

	if (creation->name == NULL || creation->owner == NULL)
	{
		free(creation->name);
		free(creation->owner);
		free(creation);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		creation->name[i] = name[i];
	creation->name = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		creation->owner[i] = name[i];
	creation->owner[i] = '\0';

	creation->age[i] = age;

	return (creation);
}
