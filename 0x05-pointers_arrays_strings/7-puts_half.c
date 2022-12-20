#include "main.h"
/**
 * puts_half - puts half
 * @str: string
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	n = i / 2;
	if (i % 2 == 1)
		n++;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
