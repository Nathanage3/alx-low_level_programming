#include "main.h"
/**
 * _atoi - casting string to integers
 * @s: the string pointer
 * Return: Always 0
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
