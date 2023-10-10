#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 *
 * Description: record of a dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);

#endif
