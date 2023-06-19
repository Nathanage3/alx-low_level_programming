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
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
};
int _strlen(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {i++; }
        return (i);
};
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
