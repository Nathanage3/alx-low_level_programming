#include "main.h"
int my_palindrome(char *s, int start, int end);
int _strlen(char *s);
/**
 * is_palindrome - checking forward and backward
 * @s: the string pointer
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (my_palindrome(s, 0, len - 1));
}
/**
 * my_palindrome - checking strart to end
 * @start: the first char
 * @end: the last char
 * @s: string to be executed
 * Return: Always 0
 */
int my_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (my_palindrome(s, start + 1, end - 1));
}
/**
 * _strlen - find the string length
 * @s: the string chars to be counted
 * Return: Always 0
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
