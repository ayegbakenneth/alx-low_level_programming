#include "dog.h"
#include <stdio.h>
/**
 * init_dog - dog
 * @d: dog pointer
 * @name: dog identity
 * @age: dog age
 * @owner: owners
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
