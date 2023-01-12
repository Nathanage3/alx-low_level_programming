#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat -concatination
 * @s1: char
 * @s2: char
 * @n: integer
 * Return: char value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
