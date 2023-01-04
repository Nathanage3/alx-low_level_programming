#include "main.h"
/**
 * _memcpy - copy string
 * @dest: destination
 * @src: source
 * @n: int n
 * Return: char value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}


