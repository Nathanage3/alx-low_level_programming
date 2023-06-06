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
	unsigned int i = 0, j = 0;

	if (*haystack == NULL || *needle == NULL)
	{
		return (NULL);
	}
	if (haystack[i] == '\0' || needle[j] == '\0')
	{
		return (NULL);
	}
	for (; haystack[i] != '\0'; i++)
	{
		for (; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
