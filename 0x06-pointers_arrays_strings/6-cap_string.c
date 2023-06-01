#include "main.h"
/**
 * cap_string - capitalize the first char of each word
 * @str: the coming string
 * Return: return a pointer
 */
char *cap_string(char *str)
{
	int cap_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int i;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (cap_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		cap_next = 0;
		for (i = 0; i < sizeof(separators); i++)
		{
			if (*ptr == separators[i])
			{
				cap_next = 1;
				break;
			}
		}
		*ptr++;
	}
	return (str);
}
