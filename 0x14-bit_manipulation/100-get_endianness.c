#include "main.h"
/**
 * get_endiannes
 * Return: 0 if beg endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int val = 1;
	char *p = (char *)&val;

	return (int)*p;
}
