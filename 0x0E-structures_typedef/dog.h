#ifndef TASK0
#define TASK0

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - struct for dog (name, age, owner)
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
