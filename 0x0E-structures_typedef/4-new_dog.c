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
	int i = 0;
	dog_t *d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	while (name[i] != '\0')
		d->name[i] = name[i];
	d->name[i] = '\0';

	i = 0;
	while (owner[i] != '\0')
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	d->age = age;

	return (d);
}
