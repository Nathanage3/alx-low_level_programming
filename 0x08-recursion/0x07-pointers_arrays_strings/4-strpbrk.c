#include "main.h"
/**
 * _strpbrk - first occurence funtion
 * @s: string to be cut
 * @accept: accept
 * Return: return char value
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}


