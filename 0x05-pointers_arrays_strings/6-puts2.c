#include "main.h"
#include <stdio.h>
/**
 * puts2 - use puts function
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
