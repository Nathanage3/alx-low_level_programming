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
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
		dest[i + n + 1] = '\0';
	return (dest);
}
