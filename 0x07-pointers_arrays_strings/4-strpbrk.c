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
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	if (accept[j] == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
