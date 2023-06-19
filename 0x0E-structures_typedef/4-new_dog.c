#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - poppy's friend
 * @name: new dog
 * @age: age of new dog in float
 * @owner: owner of new dog
 * Return: a pointer function value to the main function
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{return (NULL); }
	name_len = _strlen(name);
	owner_len = _strlen(owner);
	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL); }
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
