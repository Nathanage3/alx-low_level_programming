#include "main.h"

/**
 * _isalpha - Checks the character
 * @c - The character to be checked
 * Return: 1 for letter or 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
