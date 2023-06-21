#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;
	ptr(name);
}
