#include <unistd.h>
/**
 * main - main function
 * Return: Always 1 for error
 */
int main(void)
{
	const char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, text, 59);
	return (1);
}
