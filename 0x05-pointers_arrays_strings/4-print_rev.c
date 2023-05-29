#include "main.h"
/**
 * print_rev - print reverse of the given string
 * @s: the string to be tested
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; s[i] != '\0'; i--)
		_putchar(s[i]);
	_putchar('\n');
}
