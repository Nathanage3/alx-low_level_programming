#ifndef 1_INIT_DOG_C
#define 1_INIT_DOG_C

/**
 * init_dog - void function
 * @d: struct dog datatype
 * @name: char pointer
 * @age: age
 * @owner: owner
 */ 
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog *d
{
	char *name;
	float age;
	char *owner;
};
#endif
