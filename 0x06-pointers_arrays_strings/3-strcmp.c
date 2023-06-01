#include "main.h"
/**
 * _strcmp - string compare
 * @s1: the first string
 * @s2: the second string
 * Return: the difference between the ascii values of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
