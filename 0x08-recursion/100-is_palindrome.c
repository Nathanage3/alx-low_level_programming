#include "main.h"
/**
 *_strlen_recursion - yes
 * @s: string
 * Return: 1 for success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - yes
 * @s: string
 * Return: 1 for success
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));	

}
/**
 * comp - comp
 * @s:string
 * @i: int
 * @j: int
 * Return: 1 for success
 */
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

