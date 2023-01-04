#include "main.h"
/**
 * _strlen_recursion - recursion
 * @s: char
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
