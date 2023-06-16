#include "main.h"
#include <stdlib.h>
/**
 * _strlen - computes the length of a string
 * @s: the input string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return len;
}
