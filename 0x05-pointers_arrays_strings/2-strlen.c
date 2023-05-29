#include "main.h"
/**
 * _strlen - string len of a word
 * @s: string
 * Return: Aways 0 for success
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
