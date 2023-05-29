#include "main.h"
#include <stdio.h>
/**
 * puts2 - use puts function
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
