#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: number of argument element
 * Return: arg element
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int number;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
