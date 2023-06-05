#include "main.h"
/**
 * _strspn - string count
 * @s: string
 * @accept: compared with string
 * Return: return the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;
	int on_mode = 1;

	while (*s && on_mode)
	{
		on_mode = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i++;
				on_mode = 1;
				break;
			}
		}
		s++;
	}
	return (i);
}
