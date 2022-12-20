#include "main.h"

/**
 * rev_string - print string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;

	int aux = 0;

	char temp;

	while (*(s + i) != '\0')
		i++;
	i--;
	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
