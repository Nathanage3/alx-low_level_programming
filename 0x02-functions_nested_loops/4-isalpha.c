#include "main.h"
/**
 * _isalpha - Checks the character
 * @c - characterto be checked
 * Return: 1 for letter ,0 if not
 */
int _alpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
