#include "main.h"
/**
 * rot13 - a to m or A to M and N to Z or n to z
 * @str: the string to be tested
 * Return: return the rotated string
 */
char *rot13(char *str)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
