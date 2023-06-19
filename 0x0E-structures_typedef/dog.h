#ifndef DOG_H
#define DOG_H
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
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
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
