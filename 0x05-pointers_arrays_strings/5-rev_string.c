#include "main.h"
/**
 * rev_string - reversse a string
 * @s: the string to be tested
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; s[i] != '\0'; i--)
		_putchar(s[i]);
	_putchar('\0');
}
