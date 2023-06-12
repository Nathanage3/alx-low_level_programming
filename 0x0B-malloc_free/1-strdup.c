#include "main.h"
/**
 * _strdup - string duplication
 * @str: string pointer
 * Return: Always 0 on success
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new = malloc(sizeof(char) * (i + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		new[j] = str[j];
	}
	return (new);
}
