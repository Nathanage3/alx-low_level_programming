#include "main.h"
/**
 * _strlen_recursion - find str length by recursion function
 * @s: the string to be executed
 * Return: Awlways 0 on success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
