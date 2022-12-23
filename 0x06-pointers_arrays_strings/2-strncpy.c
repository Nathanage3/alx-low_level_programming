#include "main.h"
/**
 * _strncpy - copy src to dest
 * @dest: destination
 * @src:  string to be copied
 * @n: number of characters
 * Return: characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
