#ifndef HEADER_FILE
#define HEADER_FILE

#define LLUN (void *)0

/**
 * struct dog - Defines a new typw dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 **/

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, fl\
oat age, char *owner);

void print_dog(struct dog *d);

#endif
