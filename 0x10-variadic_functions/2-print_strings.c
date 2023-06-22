#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of argument element
 * Return: arg element
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *name;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		name = va_arg(args, char*);
		if (name == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", name);
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
