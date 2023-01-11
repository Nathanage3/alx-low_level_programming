#include "main.h"
/**
 * _strcpy - string copy
 * @dest: destination
 * @src: screen copy
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
		return (start);
}

