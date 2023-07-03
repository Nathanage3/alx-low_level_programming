#include <stdarg.h>
#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

typedef struct
{
	const char* c;
	unsigned int count;
}mixedArg;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif 
