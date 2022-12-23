#include "main.h"
#include <string.h>
/**
 * *_strcat - string concatinate
 * @dest: char destination
 * @src: char pointer
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
