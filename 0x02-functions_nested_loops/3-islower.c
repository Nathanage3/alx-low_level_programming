#include "main.h"
/**
 * _islower - prints lower alphabets
 * @r: take c as a parameter
 * Return: Always 0 on success
 */
int _islower(int r)
{
	if (r >= 97 && r <= 122)
		return (1);
	else
		return (0);
}
