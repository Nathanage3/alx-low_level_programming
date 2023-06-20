#ifndef DOG_H
#define DOG_
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void free_dog(dog_t *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
