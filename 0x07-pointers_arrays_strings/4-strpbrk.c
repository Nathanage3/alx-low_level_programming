#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - string pointer break
 * @s: string s
 * @accept: string compared to
 * Return: return string pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
