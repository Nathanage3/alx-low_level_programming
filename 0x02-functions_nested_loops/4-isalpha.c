#include "main.h"
/**
 * _isalpha - Checks the character
 * @c - characterto be checked
 * Return: 1 for letter ,0 if not
 */
int _alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
