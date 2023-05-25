#include <unistd.h>
/**
 * _putchar - do the putchar funtion can do
 * @c: the character
 * Return: Always 0 on success and return 1 for failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
