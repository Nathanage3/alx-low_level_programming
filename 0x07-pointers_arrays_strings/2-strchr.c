#include "main.h"
#include <stddef.h>
/**
 * _strchr - first occurence of a character
 * @s: the string
 * @c: the char to be searched
 * Return: pointer string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
