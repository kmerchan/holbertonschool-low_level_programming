#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to talk about dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 *
 * Description: This structure includes information about a dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
