#include "main.h"
/**
 * _islower - checks is characters are in lowercase
 * @c: The character to be executed
 * Return: 1 if the character is lowercase, 0 if not
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
