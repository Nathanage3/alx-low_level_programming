#include "main.h"
/**
 * _strncat - concatinate n characters of src to dest
 * @dest: destination
 * @src: to be appended
 * @n: n characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && scr[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
		dest[i] = '\0';
	return (dest);
}
