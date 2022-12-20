#include "main.h"
/**
 * puts_half - puts half
 * @str: string
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i > str[i] / 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
