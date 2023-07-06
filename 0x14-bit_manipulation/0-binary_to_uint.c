#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - binary to decimal
 * @b: binary
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int k = 0;

	if (b == NULL)
		return (0);
	while (b[k])
	{
		if (b[k] == '0' || b[k] == '1')
		{
			bin = (bin * 2) + (b[k] - '0');
			k++;
		}
		else
		{
			return (0);
		}
	}
	return (bin);
}
