#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: input value
 * @name: input value
 * @age: input value
 * @owner: input value
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
