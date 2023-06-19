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

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
