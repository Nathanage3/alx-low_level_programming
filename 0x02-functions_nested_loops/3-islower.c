#include "main.h"
/**
 * _islower - checks is characters are in lowercase
 * @c- the character
 * Return: 1 if the letter is in lowercase, -1 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
