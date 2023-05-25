#include "main.h"
/**
 * _isupper - filtering uppercase letters
 * @c: the ascii value sent to main function
 * Return: Always 0 for success and return 1 for failure
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
