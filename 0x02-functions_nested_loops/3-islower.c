#include "main.h"
/**
 * _islower - checks is characters are in lowercase
 * Return: 1 if the letter is in lowercase, -1 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (-1);
}
