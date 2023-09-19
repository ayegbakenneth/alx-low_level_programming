#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Dog description
 * @name: the identifier
 * @age: the number of years
 * @owner: The dog owner
 * Return: pointer to struct of type dog_t,
 * Null on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, c = 0;
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
		return (0);

	dog->age = age;
	for (; name[a] || owner[c];)
	{
		if (name[a])
			a++;
		if (owner[c])
			c++;
	}
	dog->name = malloc(sizeof(char) * (a + 1));
	if (!dog->name)
	{
		free(dog);
		return (0);
	}
	dog->owner = malloc(sizeof(char) * (c + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	for (a = 0; name[a]; a++)
		dog->name[a] = name[a];
	dog->name[a] = 0;
	for (a = 0; owner[a]; a++)
		dog->owner[a] = owner[a];
	dog->owner[a] = 0;

	return (dog);
}
