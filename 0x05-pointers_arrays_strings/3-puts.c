#include "main.h"
/**
 * _puts - put function
 * @str: the string to be executed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
