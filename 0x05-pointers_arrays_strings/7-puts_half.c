#include "main.h"
/**
 * puts_half - prints half of the given string
 * @str: the string to b tested
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = ((i - 1) / 2) + 1;
	while (n < i)
	{
		_putchar(str[n]);
		       n++;
	}
	_putchar('\n');
}
