#include "function_pointers.h"

/**
 * print_name - Prints name as is
 * @name: name to be printed
 " @f: function pointer to print name
 **/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
