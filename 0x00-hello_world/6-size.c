#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char	a;
	int	b;
	long int	c;
	long long int	d;
	float	e;

	printf("Size of a char: %lu byte(S)\n",	sizeof(a));
	printf("Size of an int: %lu byte(S)\n", sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(d));
	printf("Size of a float: %lu byte(S)\n", sizeof(e));
	return	(0);

}
