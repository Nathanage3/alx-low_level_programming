#include "main.h"
/**
 * leet - 1337
 * @str: string of text
 * Return: return a pointer
 */
char *leet(char *str)
{
	char replacements[10] = "4433007711";
	char letter[10] = "aAeEoOtTlL";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
