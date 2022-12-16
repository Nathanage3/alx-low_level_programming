#include "main.h"
/**
 * _isdigit - Checks if the character is digit
 * @c: the character to be executed
 * Retrun: 1 for character is digit and 0 for others
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
