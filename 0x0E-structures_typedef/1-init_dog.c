#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog
 * @d: structure to hold dog
 * @name: name to initiliaze
 * @age: age to initiliaze
 * @owner: owner to initiliaze
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
