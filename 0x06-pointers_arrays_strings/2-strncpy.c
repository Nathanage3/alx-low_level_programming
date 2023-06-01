#include "main.h"
/**
 * _strncpy - copy n characters from the source to destination
 * @dest: destination
 * @src: source
 * @n: number of chars to be copied to dest
 * Return: dest to the main function
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
