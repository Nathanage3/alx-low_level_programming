#include <stdlib.h>
#include "dog.h"
int _strlen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    return (len);
}
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);
    name_len = _strlen(name);
    new_dog->name = malloc((name_len + 1) * sizeof(char));
    if (new_dog->name == NULL) {
        free(new_dog);
        return (NULL); }

    _strcpy(new_dog->name, name);
    new_dog->age = age;
    new_dog->owner = owner;
    return (new_dog);
}
