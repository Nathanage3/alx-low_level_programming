#include "main.h"
/**
 * puts_half - puts half
 * @str: string
 */
void puts_half(char *str)
{
	int i, n;

	n = 0;
	n = 0;
	while (str[i] != '\0')
		i++;
	n = i / 2;
	if (i % 2 == 1)
		n++;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
