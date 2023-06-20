#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - str length
 * @str: string pointer
 * Return: a string length
 */
int  _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{i++; }
	return (i);
}
/**
 * _strcpy - string copy
 * @dest: dest
 * @src: src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
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
	int name_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{return (NULL); }
	name_len = _strlen(name);
	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL); }
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
