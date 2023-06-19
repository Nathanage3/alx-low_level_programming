#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: char pointer
 * @age: age of poppy
 * @owner: poppy owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the name string
 * @age: Age of the dog
 * @owner: Pointer to the owner string
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
