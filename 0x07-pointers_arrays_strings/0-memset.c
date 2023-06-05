#include "main.h"
/**
 * _memset - memory set
 * @s: pointer string
 * @b: b bytes of chars is going to be copied
 * @n: n size of bytes to be copied
 * Return: returns pointer string
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
