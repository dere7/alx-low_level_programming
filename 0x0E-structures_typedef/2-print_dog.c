#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - print dog
 * @d: structure to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
