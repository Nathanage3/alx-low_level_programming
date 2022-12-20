#include "main.h"
/**
 * _strlen - print the length of sring
 * @s: string character
 * Return: Always 0
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	return (counter);
}
