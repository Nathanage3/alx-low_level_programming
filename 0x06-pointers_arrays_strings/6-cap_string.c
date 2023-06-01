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
	int i, j = 0;

	while (str[j] != '\0')
	{
		if (cap_next && str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		cap_next = 0;
		for (i = 0; i < 20; i++)
		{
			if (str[j] == separators[i])
			{
				cap_next = 1;
				break;
			}
		}
		j++;
	}
	return (str);
}
