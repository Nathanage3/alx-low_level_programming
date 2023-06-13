#include <stdlib.h>
#include "main.h"
/**
 * argstostr - argument string store
 * @ac: argc
 * @av: argv
 * Return: Always 0 on success and 1 on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0;
	int current_pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			len++;
			total_len += len + 1;
		}
	}
	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[current_pos] = av[i][len];
			len++;
			current_pos++;
		}
		str[current_pos] = '\n';
		current_pos++;
	}
	str[current_pos] = '\n';
	return (str);
}
