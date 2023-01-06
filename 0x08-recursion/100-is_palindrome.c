#include "main.h"
/**
 * is_palindrome - yes
 * _strlen_recursion - strlen
 * comp - comp
 * @s: string
 * Return: 1 for success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	int is_palindrome(char *s)
	{
		if (*s == '\0')
		return (1);
		return (comp(s, 0, _strlen_recursion(s) - 1));	
	}
	int comp(char *s, int i, int j)
	{
	if (s[i] == s[j])
	{
	if (i == j || i == j + 1)
	return (1);
	return (0 + comp(s, i + 1, j - 1));
	}
	return (0);
	}
}
