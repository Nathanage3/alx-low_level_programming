#include <unistd.h>
/**
 * _putchar - do the putchar function do
 * @c: the char to be executed
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
