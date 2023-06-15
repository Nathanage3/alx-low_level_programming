#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - string concat
 * @s1: the first string
 * @s2: the second string
 * @n: number of chars from s2
 * Return: new string pointer which holds s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncat;
	unsigned int i = 0, j = 0, l = 0, k = 0;

	if (s1 == NULL)
	{s1 = ""; }
	if (s2 == NULL)
	{s2 = ""; }
	while (s1[i] != '\0')
	{i++; }
	while (s2[j] != '\0')
	{j++; }
	if (n >= j)
	{n = j; }
	ncat = malloc(sizeof(char) * (i + n + 1));
	if (ncat == NULL)
	{return (NULL); }
	while (s1[l] != '\0')
	{
		ncat[l] = s1[l];
		l++;
	}
	while (n > k)
	{
		ncat[l] = s2[k];
		l++;
		k++;
	}
	return (ncat);
}
