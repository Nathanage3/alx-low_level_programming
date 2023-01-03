#include "main.h"
/**
 * _memset - fill string s with char b
 * @s: string
 * @b: char b
 * @n: int
 * Return: char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}


