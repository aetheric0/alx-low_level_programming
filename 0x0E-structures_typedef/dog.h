#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - Defines a new typw dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, fl\
oat age, char *owner);

void print_dog(struct dog *d);

#endif
