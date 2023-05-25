#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: characters to be checked
 * Return: Always 0 for success and return 1 for failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
