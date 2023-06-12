#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - string concatination
 * @s1: source string
 * @s2: the string to be concatinated
 * Return: Always 0 on success
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	new = malloc(sizeof(char) * (i + j + 2));
	j = 0;
	while (s1[j] != '\0')
	{
		new[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[j] = s2[i];
		i++;
		j++;
	}
	return (new);
}
