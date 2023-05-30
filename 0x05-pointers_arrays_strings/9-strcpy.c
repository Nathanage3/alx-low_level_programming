#include "main.h"
/**
 * _strcpy - string copy function
 * @dest: destination
 * @src: source
 * Return: dest to the main function
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
