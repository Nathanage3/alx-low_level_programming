#include <unistd.h>
/**
 * _putchar - _putchar
 * @c: the char to be executed
 * Return: return c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
