#include "main.h"
#include <stddef.h>
/**
 * _strstr - string string
 * @haystack: The first string
 * @needle: The second string
 * Return: return pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*n == '\0')
	{
		return (haystack);
	}
	while (*h)
	{
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (*h);
		}
		*h++;
	}
	return (NULL);
}
