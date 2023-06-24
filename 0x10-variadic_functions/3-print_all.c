#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - printall
 * @format: cifs
 * Return: The selected format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int num;
	char c;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%i", num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue; }
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
