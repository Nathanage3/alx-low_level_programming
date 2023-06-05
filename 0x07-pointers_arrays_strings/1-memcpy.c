#include "main.h"
/**
 * _memcpy - copy from src to dest
 * @dest: destination
 * @src: source
 * @n: n size of bytes
 * Return: dest to the main function
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
