#include <stdio.h>
/**
 * init_dog - void function
 * @d: struct dog datatype
 * @name: char pointer
 * @age: age
 * @owner: owner
 */ 
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	void *p;

	(*p).age = 0;
	(*p).name = "";
	(*p).owner = "";
	return (p);
}
