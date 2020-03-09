#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to initialize information for new dog
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: name of dog's owner
 *
 * Return: pointer to new data stucture with dog's information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *name_t;
	char *owner_t;
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	name_t = malloc((i + 1) * sizeof(char));
	if (name_t == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		name_t[i] = name[i];
	name_t[i] = '\n';

	for (i = 0; owner[i]; i++)
		;
	owner_t = malloc((i + 1) * sizeof(char));
	if (owner_t == NULL)
	{
		free(doggy);
		free(name_t);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		owner_t[i] = owner[i];
	owner_t = '\n';

	doggy->name = name_t;
	doggy->age = age;
	doggy->owner = owner_t;

	return (doggy);
}
