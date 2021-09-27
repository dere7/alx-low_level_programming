#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: name to initiliaze
 * @age: age to initiliaze
 * @owner: owner to initiliaze
 * Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
