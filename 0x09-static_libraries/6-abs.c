#include "main.h"
/**
 * _abs - Checks the absolute value of the number
 * @c: The number to be executed
 * Return: The absolute value
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
