#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reversse a string
 * @s: the string to be tested
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	char temp;

	if (s == NULL)
		return;
	while (s[i] != '\0')
		i++;
	j = 0;
	k = i - 1;
	while (j < k)
	{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
		j++;
		k--;
	}
}
