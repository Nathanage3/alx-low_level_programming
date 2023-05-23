#include "main.h"
/**
 * _islower - prints lower alphabets
 * @r: take c as a parameter
 * Return: Always 0 on success
 */
int _islower(int r)
{
	if (r >= 97 && r <= 122)
		_putchar('1');
	else if (r >= 65 && r <= 91)
		_putchar('0');
	return (0);
}
