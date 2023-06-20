#include "dog.h"
/**
 * init_dog - void function
 * @d: struct dog datatype
 * @name: char pointer
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
