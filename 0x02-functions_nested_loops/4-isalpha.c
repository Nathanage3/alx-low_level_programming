#include "main.h"
/**
 * _isalpha - prints lower alphabets
 * @c: take c as a parameter
 * Return: Always 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
